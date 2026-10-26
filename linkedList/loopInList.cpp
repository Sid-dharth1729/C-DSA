#include<iostream>
#include<map>   //for using map STL
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    //distructor
    ~Node(){
        int val = this->data;
        if( next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with value: "<<val <<endl; 
    }
};

void insertNodeAtTail( Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
    //print
void print( Node* &head){
    Node* temp = head;
    while( temp != NULL){
        cout<< temp->data <<" ";
        temp = temp -> next;
    }
    cout<< endl;
}

    //Detect Loop
bool detectLoop( Node* &head){
    if(head == NULL){
        return false;
    }
    map<Node* , bool> visited;
    Node* temp = head;
    while(temp != NULL){
        //visited node(loop exists)
        if( visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

        //Floyd's Cycle Detection 
Node* floydCycleDetection( Node* &head){
    if(head == NULL){
        return NULL;
    }
    //floyd's logic
    Node* slow = head;
    Node* fast = head;

    while( slow != NULL && fast != NULL){
        fast = fast ->next;
        if( fast != NULL){
            fast = fast ->next;
        }
        slow = slow ->next;
        if( slow != NULL && slow == fast){
            cout<< " Node present in loop : " << slow ->data << endl;
            return slow;
        }
    }
    return NULL;
}

    //Get Beginning Node of loop
Node* getStartingNode( Node* &head){
    if( head == NULL){
        return NULL;
    }
    Node* intersection = floydCycleDetection(head); //point of intersection
    Node* slow = head;

    while( slow != intersection){
        slow = slow ->next;
        intersection = intersection ->next;
    }
    return slow;
}

    //Remove loop
void removeLoop(Node* head){
    if( head == NULL){
        return;
    }
    Node* startNode = getStartingNode( head); //starting node of loop
    Node* temp = startNode;
    while( temp ->next != startNode){
        temp = temp ->next;
    }
    temp ->next = NULL; //node before starting node in loop
}

int main(){
    Node* head = new Node(2);
    Node* tail = head;
    print(head);

    insertNodeAtTail(tail, 7);
    insertNodeAtTail(tail, 5);
    insertNodeAtTail(tail, 8);
    insertNodeAtTail(tail, 3);
    print(head);
    //making loop in LL
    tail ->next = head -> next;
    // print(head);
   /* if( detectLoop(head)){
        cout<< "Circular loop is present "<< endl;
    }
    else{
        cout<< "Circular loop is not present "<< endl;
    }
    */
    if( floydCycleDetection(head)){
        cout<< "Circular loop is present "<< endl;
    }
    else{
        cout<< "Circular loop is not present "<< endl;
    }
    Node* loopStNode = getStartingNode(head) ;
    cout<< "Starting Node of loop : " << loopStNode -> data<< endl;

    removeLoop(head);
    cout<< "After removing loop" << endl;
    print(head);
}
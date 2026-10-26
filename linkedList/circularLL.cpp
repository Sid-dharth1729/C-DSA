#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with value: "<<val <<endl; 
    }
};

//Insertion of circular Linked List
void insertNode(Node* &tail, int element, int d){
    //if list is Empty
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    //element known in list 
    //asuming that element id present in List
    else{
        Node* currNode = tail;
        while( currNode-> data != element) {
            currNode = currNode -> next;
        }

        Node* newNode = new Node(d);
        newNode ->next = currNode ->next;
        currNode ->next = newNode;
    }
}

    //Deletion in C.L.L
void deleteNode(Node* &tail, int element){
    //empty list
    if(tail == NULL){
        cout<< "check your list..." <<endl;
        return;
    }
    else{
        //assuming element present in List
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != element){
            prev = curr;
            curr = curr->next;
        }
        //deleting node
        prev -> next = curr -> next;
        //if list has only one Node (node count == 1)
        if(curr == prev){
            tail = NULL;
        }
        //if nodes count are >= 2
        else if(tail == curr){   //for deletion of tail(tail pointing first node)
            tail = prev;    //update tail
        }
        curr->next = NULL;
        delete(curr);
    }
}
    //Printing 
void print(Node* &tail){
    Node* temp = tail;
    if( tail == NULL){
        cout<< "List is Empty" <<endl;
        return;
    }
    do{
        cout<< tail->data <<" "; 
        tail = tail->next;
    }while(tail != temp);
    cout<< endl;
}

int main(){
    Node* tail = NULL;
    insertNode(tail, 7, 9); //here 9 becomes tail bcz List is empty
    print(tail);

    // insertNode(tail, 9, 8);
    // print(tail);

    // insertNode(tail, 8, 3);
    // print(tail);

    // insertNode(tail, 3, 7);
    // print(tail);

    // insertNode(tail, 7, 2);
    // print(tail);

    //Deletion 
    cout<< "deletion:---"<< endl;
    deleteNode(tail, 9);
    print(tail);
    return 0;
}
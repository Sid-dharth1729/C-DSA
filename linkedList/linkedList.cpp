#include<iostream>
using namespace std;

//implementation of node
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
    //memory free (using destructor)
    ~Node(){
        int value = this ->data;
        //memory free
        if(this-> next != NULL){
            delete this->next;
            this->next = NULL;
        }
        cout<< "Memory free for node : "<< this->data << endl;
    }

};
//Insertion by head of Singly Linked List
void insertAtHead( Node* &head, int d){   //d- data
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
//Insertion by tail (at end)
void insertAtTail( Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;    //diff. from head insertion
    tail = temp;
}
// Insertion a 'value' at given position
void insertAtposition(Node* &head, int position, int value){
    //inserting at head
    if(position == 1){
        insertAtHead(head, value);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position -1){   //give the element after which new value to be stored (if value insert at '3' it give 2 position )
        temp = temp -> next;
        cnt ++;
    }
    //inserting at last positon
    if(temp -> next == NULL){
        insertAtTail(temp, value);
        return;
    }
    //creating node for value
    Node* insertNode = new Node(value);
    insertNode ->next = temp ->next;
    temp -> next = insertNode;
}
        //printing
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}

//Deletion of node (by position)
void deleteNode(Node* &head, int position){
    // deletion of head
    if(position == 1){
        Node* temp = head;
        head = head -> next;    //head updates
        //free memory
        temp ->next = NULL; //before deletion make it NULL
        delete temp;    //destructor used in Node class
    }
    else{   //for all position include Last or Tail position also
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr ;
            curr = curr -> next;
            cnt++;
        }    
        prev -> next = curr -> next;
        curr ->next = NULL;
        delete curr;
    }
}
int main(){
    
    Node* node1 = new Node(40);
    cout<< node1 ->data <<endl;
    cout<< node1 ->next <<endl;
    
    cout<< endl;
    cout << "insertion at head" << endl;
    Node* head = node1;

    insertAtHead( head, 12);  //12 , 40 {40 points to Null}
    print(head);

    insertAtHead( head, 15);  //here 15 , 12, 40
    print(head);

    //Insertion at tail
    cout<< endl << "insertion at tail" << endl;
    Node* head1 = new Node(7);
    Node* tail = head1; // head1 or starting ele of linked list
    print(head1);

    insertAtTail(tail, 5);
    print(head1);

    insertAtTail(tail, 9);
    print(head1);

    //Insertion at positon at tail
    cout<< endl << "Insertion at positon " << endl;
    cout<< "before insertion: " << endl;
    print(head1);
    
    cout<< "After insertion: " << endl;
    insertAtposition(head1, 4, 10);
    print(head1);

    //Deletion of node
    cout<< "Deletion from above linked list " << endl;
    deleteNode(head1, 3);
    print(head1);

    return 0;
}
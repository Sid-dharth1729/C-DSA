#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<< "Memory is free for data: "<< val<< endl;
    }
};
//printing
void print( Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp ->data << " ";
        temp = temp ->next;
    }
    cout<< endl;
}
//length of doubly L.L
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp ->next;
    }
    return len;
}

    //Insertion at head
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head -> prev = temp;
    head = temp;
}
    //Insertion at tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
    //insertion at position
void insertAtposi(Node* head, int position, int d){
    if(position == 1){  //if position is head
        insertAtHead(head, d);
        return;
    }
    
    // Node* nodeInsert = new Node(d);
    Node* temp = head;
    int cnt = 1;
    while(cnt < position -1){
        temp = temp ->next;
        cnt++;
    }
    if(temp ->next == NULL){    //if position is tail/last
        insertAtTail(temp, d);
        return;
    }
    //for position
    Node* insertVal = new Node(d);
    insertVal ->next = temp ->next;
    insertVal -> prev = temp;
    temp->next ->prev = insertVal;
    temp->next = insertVal;
}
    //deletion at position
void deleteNode(Node* &head, int position){
    if(position == 1){  //delete head
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int  cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        //deletion where 'curr' is deleting node
        curr -> prev = NULL;
        prev -> next = curr ->next;
        curr -> next =NULL;
        delete curr;
    }
}
int main(){
    Node* head = new Node(8);
    print(head);
    cout<< "length : " << getLength(head) << endl;

    //Insert at head
    cout<< "Insertion at head "<< endl;
    insertAtHead(head, 0);
    print(head);

    insertAtHead(head, 3);
    print(head);

    //Insert at tail
    Node* head1 = new Node(4);   //for tail head is compulsory
    Node* tail = head1;
    cout<< "Insertion at tail "<< endl;
    print(head1);
    insertAtTail(tail, 11);
    print(head1);    // here's head being used

    insertAtTail(tail, 17);
    print(head1);  

    insertAtTail(tail, 2);
    print(head1);  
    
    cout<< "Insertion at Position: "<< endl;
    insertAtposi(head1, 3, 60);
    print(head1);
    
    cout<< "Deletion at Position: "<< endl;
    deleteNode(head1, 1);
    print(head1);
    return 0;
}
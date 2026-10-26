#include<iostream>
using namespace std;

class Stack{
    //properties 
    public:
        int *arr;   //stack 
        int top;    //for top index
        int size;   //stack size
    //behaviour
    Stack(int size){
        this->size = size;
        arr = new int [size];
        top = -1;
    }
        //push method
    void push( int val){
        if(size - top > 1){
            top++;
            arr[top] = val;
        }
        else{
            cout<< "Stack overflow"<< endl;
        }
    }

        //pop method
    void pop(){
        if(top >=0){
            top--;
        }
        else{
            cout<< "Stack underflow"<< endl;
        }
    }
        //top element
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<< "Stack is empty "<< endl;
            return -1;
        }
    }
        // is empty
    bool isEmpty(){
        if(top == -1){
            return true; 
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack st(5);    //stack of size 5
    cout<< endl;
    st.push(10);
    st.push(2);
    st.push(8);
    st.push(24);
    st.push(15);

    cout<< "Top element : "<< st.peek()<< endl;

    st.pop();
    cout<< "Top element after pop() : "<< st.peek()<< endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty"<< endl;
    }
    else{
        cout<<"Stack is NOT Empty"<< endl;
    }
    return 0;
}
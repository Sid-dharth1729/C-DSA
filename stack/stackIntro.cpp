#include<iostream>
#include<stack>
using namespace std;
    //for accessing we have to make copy, so that we can pop() dummy stack
void printSt(stack<int> st){
    while( !st.empty()){
        cout<< st.top()<< " ";
        st.pop();
    }
    cout<< endl;
}
int main(){
    stack<int> st;
    //push method
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    //.size() 
    cout<<endl << "Size of stack is: "<< st.size() <<endl;
    printSt(st);
    //pop method
    st.pop();
    cout<< "After pop() Size of stack is: "<< st.size() <<endl;
    printSt(st);

    //top method for last element
    cout<< "Top element is: "<< st.top() << endl;

    // empty method 
    if(st.empty()){
        cout<< "Stack is empty" << endl;
    }
    else{
        cout<< "Stack is not empty" << endl;
    }
    printSt(st);
    

    return 0;

}

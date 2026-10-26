#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creation
    queue<int> q;
    // insertion for queue
    q.push(2);
    q.push(7);
    q.push(13);
    q.push(9);

    // size of queue
    cout<< "size of Queue: "<< q.size() <<endl;
    
    // empty()
    if(q.empty()){
        cout<<"Queue is empty" << endl;
    }
    else{
        cout<<"Queue is not empty " << endl;
    }
    
    // pop()
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<"size of Queue after pop: "<<q.size() <<endl;

    // front()
    cout<< "front of Queue: "<<q.front() <<endl;
    cout<< "back of Queue: "<<q.back() <<endl;
    

    return 0;
}
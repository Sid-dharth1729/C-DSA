#include<iostream>
#include<queue>

using namespace std;

// Doubly ended Queue

int main(){
    //declaraton
    deque<int> d;
    //push front
    d.push_front(4);
    //push back
    d.push_back(7);

    // front & rear
    cout<< "front: " <<d.front() <<endl;
    cout<< "rear: " <<d.back() <<endl;
    
    // pop_front()
    d.pop_front();
    cout<< "After pop_front, front: " <<d.front() <<endl;
    
    // pop_back()
    d.pop_back();

    if(d.empty()){
        cout<< "deque is empty"<< endl;
    }else{
        cout<< "deque is not empty"<< endl;
    }
    return 0;
}
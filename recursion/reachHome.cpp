#include<iostream>
using namespace std;

void reachHome(int step, int dest) {        

    cout<<"step "<<step <<" destination= "<<dest <<endl;

    //base case
    if(step == dest){

        cout<<"Reached Home!!"<<endl;
        return ;
    }
    //processinng
    step++;

    //recursion relation
    reachHome(step , dest);       //Loop using recursion

}
int main() {
    int dest =10;
    int step = 1;
    reachHome(step, dest);  //Loop using recursion

    return 0;
}
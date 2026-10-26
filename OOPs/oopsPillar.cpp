#include<iostream>
using namespace std;

class human{    //Enclapsulation (wrapping up Data member & function)
    public:
    int num;
    int height;
    string name;
    int age;

    private:
    int weight;

    public:
    int getAge(){
        return this->age;
    }

};

//Inheritance
class male : public human{
    public:
    string color;
    void print(){
        cout<< "I am male"<< endl;
    }
};

int main(){
    human A;
    male b; //it inherited the property of parent/super class
    b.print();
    cout<< "using parent property:" << b.age <<endl;

        //Not accessible bcz it private in human
    // cout<< "using parent property:" << b.weight <<endl; 
    return 0;
}
#include<iostream>
using namespace std;

    //Compile time polymorphism
class A{
    public:
    void show(){
        cout<< "hello sir" <<endl;
    }

    void show(int n){
        cout<< "Function with argument" <<endl;
    }
};

class B{
    public:
    int a;
    int b;

    void operator+ ( B &obj){
        int value1 = this-> a;
        int value2 = obj.a;
        cout<< "output: " << value2 - value1 << endl;
    }
    void operator() (){
        cout<< "I am Bracket..."<< this->a << endl;
    }
};

    //Run time Polymorphism {Method/Function OVerriding}
class Animal {
    public:
    void sound(){
        cout<< "Animal sound...."<< endl;
    }
};
class Dog: public Animal {
    public:
    void sound(){   //it override the Parent's sound function
        cout<< "Barking...."<< endl;
    }
};

int main(){
    //function Overloading both work bcz it has same name but diff argument
    cout<< endl<< "Function Overload" << endl;
    A son;
    son.show();     //1 function 
    son.show(2);    // 2nd function
    
    //Operator overload
    cout<< endl<< "Operator Overload" << endl;
    B obj1 , obj2; // 2 objects
    obj1.a = 4;
    obj2.a = 7;
    obj1 +obj2; // '+' is changed to '-'

    obj1();

    //Function Overriding
    cout<< endl<< "Function Overriding" <<endl;
    Dog sheru;
    sheru.sound();

    return 0;
}
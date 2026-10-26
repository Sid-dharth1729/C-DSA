#include<iostream>
using namespace std;

class Animal{
    public:
    int num;
    string name;

    public:
    void ani(){
        cout<< "Animal.." << endl;
    }
};

class Dog: public Animal{
    public:
    void dogi(){
        cout<< "Single Inheritance: Dog is inherited by Animal"<< endl;
    }
};
class Labradour: public Dog{
    public:
    void breed(){
        cout<< "Multilevel Inheritance: Animal > Dog > Labradour"<< endl;
    }
};

class Human{
    public:
    void hu(){
        cout<< "Human....."<< endl;
    }
};
    //Multiple inheritance
class Person: public Animal, public Human{
    public:
    void per(){
        cout<< "Multiple Inheritance: Person is inherited by Animal & Human "<< endl;
    }
};

    //Hierachile Inhertance (both inherited by same parent)
class Sir : public Human{
    public:
    void s(){
        cout<< "sir is inherited by Human" <<endl;
    }
};
class Mam: public Human{
    public:
    void m(){
        cout<< "Mam is inherited by Human" <<endl;
    }
};

    //Inheritance Ambiguty
class A{
    public:
    void fun(){
        cout<< "Hello A"<< endl;
    }
};
class B: public A{
    public:
    void fun(){
        cout<< "Hi B"<< endl;
    }
};
int main(){
    Animal a;
    a.ani();
    cout<< endl;

    //Single Inheritance
    Dog tyson;
    tyson.ani();
    tyson.dogi();
    cout<< endl;

    //Multilevel Inheritance
    Labradour sheru;
    sheru.ani();
    sheru.dogi();
    sheru.breed();
    cout<< endl;

    //Multiple Inheritance
    Person P;
    P.per();
    P.hu();
    P.ani();
    cout<< endl;

    //Heirarchical  Inheriance
    Sir b1;
    b1.hu();
    b1.s();
    Mam m1;
    m1.hu();
    m1.m();
    cout<< endl;

    //Inheritance Ambiguty
    B print;
    print.B::fun();
    print.fun();
    print.A::fun();
    cout<< endl;
    
    return 0;
}
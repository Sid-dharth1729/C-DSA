#include<iostream>
// #include"Hero.cpp" //including class from ther file
using namespace std;

//Class 
class Hero{
    //properties
    // int health;
    //Modifiers
    public:
    char level;
    int power;

    //Static  Member
    static int time;

    //Constructor
    Hero(){
        cout<< "Default Construtor Called"<< endl;
    }
    
    //Parameterised Constructor
    Hero(char level, int power){
        cout<< "Parameter Construtor Called"<< endl;

        this ->level = level;
        cout<<"Level: " << this->level<< endl;
        this ->power = power;
        cout<<"Power: " << this->power<< endl;
    }

    //Copy Constructor
    Hero(Hero &temp){
        cout<< "Copy Construtor Called"<< endl;

        this->level = temp.level;
        cout<< "level: "<< this->level <<endl;
        this->power = temp.power;
        cout<< "Power"<< this->power << endl;
    }
    void print(){
        cout<<"Level:" << this->level << endl;
        cout<<"Power:" << this->power << endl;
    }

    //Destructor (For static object it automatically called, for dynamic object it manually called)
    ~Hero(){
        cout<< "Destructor Called...";
    }
    private:
        int count;
        int health;
        
    //To Access private properties Using (Getter & Setter)
    public:
        int setCount( int x){
            count = x;
        }
        int getCount(){
            return count;
        }
        int setHealth( int y){
            health = y;
        }
        int getHealth(){
            return health;
        }

        //Static Fuction (no need of Object)
        static int sfunc(){
            return time;    //only accept static keyword
        }
};
    int Hero::time = 2; //intializing static member

int main(){
    //Static Member
    cout<< "Static variable: " << Hero::time << endl;   //no need to create object to access it

    //Static function
    cout<< "Static function: " << Hero::sfunc() << endl;
    Hero ramesh;
    //Staticmember with Object 
    cout<< "Static member with Object:" <<ramesh.time << endl;

    cout<< endl;
    //Destructor for dynamic Object
    Hero *d = new Hero;
    delete d;

    /*
    //Constructor with Parameter
    cout<< "hero dev: "<< endl;
    Hero dev('C', 88);

    //Copy constructor
    Hero jai(dev);
    

    //Copy Operator
    cout<<endl << "A:- "<< endl;
    Hero A('H', 90);

    cout<< "P:- "<< endl;
    Hero P('P', 77);

    A = P;
    cout<<endl <<"Now the value: "<< endl;
    cout<< "A: "<< endl;
    A.print();
    cout<< "P: "<< endl;
    P.print();
    */

    /*
    //Object h1
        //Static Allocation
   Hero h1;    
    h1.level = 'A'; //public 
    h1.setCount(7); //private 
    h1.setHealth(70);
    
    cout<< h1.level<< endl;
    cout<< h1.getCount()<< endl;
    cout<< h1.getHealth()<< endl;

    // cout<< sizeof(h1); //it return (size of properties)
    cout<< "level of h1 :" << h1.level << endl;
    
    //Dynamically Allocation
    Hero *b = new Hero;
    b->setCount(3);
    b->setHealth(80);
    
    cout<< "Hero b"<< endl;
    cout<< b->getCount()<< endl;    // (*b).value == b->value
    cout<< (*b).getHealth()<< endl;
    */
    return 0;
}
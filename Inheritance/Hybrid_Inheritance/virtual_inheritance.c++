#include<iostream>
using namespace std;


class Computer{
    public:
    Computer(){
        cout<<"Computer Default constructor"<<endl;
    }
    void print(){
        cout<<"Computer class"<<endl;
    }
    ~Computer(){
        cout<<"Computer  Destructor"<<endl;
    }
};



class Monitor :virtual public Computer{
    public:
    Monitor(){
        cout<<"Monitor Default constructor"<<endl;
    }
    void print(){
        cout<<"Monitor class"<<endl;
    }
    ~Monitor(){
        cout<<"Monitor  Destructor"<<endl;
    }
};


class Keyboard :virtual public Computer{
    public:
    Keyboard(){
        cout<<"Keyboard Default constructor"<<endl;
    }
       void print(){
        cout<<"Keyboard class"<<endl;
    }
    ~Keyboard(){
        cout<<"Keyboard  Destructor"<<endl;
    }
};


class Laptop : public Monitor,public Keyboard{
    public:
    Laptop(){
        cout<<"Laptop  constructor"<<endl;
    }
      void print(){
        cout<<"Laptop class"<<endl;
    }
    ~Laptop(){
        cout<<"Laptop  Destructor"<<endl;
    }
};


int main(){
// Virtual inheritance is a mechanism used to prevent ambiguity when a class inherits from multiple base classes that share a 
// common base class. It ensures that there's only one instance of the common base class.
// In this code, i used the virtual keyword when inheriting from Computer in both the Monitor and Keyboard classes. This 
// means that, even though Laptop inherits from both Monitor and Keyboard, there is only one shared instance of the Computer class for Laptop
 
 Laptop lp;

 // know in this Laptop goes to monitor ans Computer is the parent of monitor , so this time instead monitor calling the Computer , laptop will directly
 // call the computer class , after adding virtual know laptop is directly pointing to Computer class.

 

}
#include<iostream>
using namespace std;

// here we will be discussing the famous diamond problem 
    //       A
    //      / \
    //     /   \
    //    /     \
    //    B     C
    //    \     /
    //     \   /
    //      \ /
    //       D

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
class Monitor : public Computer{
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
class Keyboard : public Computer{
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
 // Order Constructors , first it will call the Monitor class object then Computer class object there the constructor of Computer will be called 
// then it will return to Monitor class and will call the monitor class constructor , next it will call the keyboard class object which will call 
// the computer class constructor,next it will return and call the Keyboard class constructor then it will call the Laptop class constructor
    
    Laptop Lp;
   
   Lp.Monitor :: print();
// Multiple Inheritance and Ambiguity:
// In the Laptop class, i  have inherited both the Monitor and Keyboard classes, both of which themselves inherit from the Computer class.
// This creates the potential for ambiguity when i  try to access a member (function or data) of the Computer class directly from a Laptop object,
//  as there are two paths to the Computer class through Monitor and Keyboard.


// Resolving Ambiguity:
// To resolve this ambiguity, i  can use the scope resolution operator (::) to explicitly specify which version of the member i 
//  want to access. In my example, Lp.Monitor::print(); specifies that i  want to call the print function from the Monitor class,
//  which is one of the two base classes of Laptop.


// Searching for Members:
// When i  access a member of an object, the search starts in the class where the object is defined. If the member is not found in that
//  class, it searches in the parent classes. In my case, Lp.Monitor::print(); tells the compiler to look for the print function in the 
//  Monitor class, and if it's not found there, then search in the parent classes. This way, i  can disambiguate and specify exactly 
// which version of the member i  want to use when dealing with multiple inheritance. It's a useful technique to resolve  conflicts that 
// can arise in such scenarios.


}
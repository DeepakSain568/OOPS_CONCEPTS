#include<iostream>
using namespace std;


class College {
    public:
    College(){
        cout<<"College Default Constructor"<<endl;
    }
   void print(){
    cout<<"College print function"<<endl;
   }
   ~College(){
        cout<<"College Default Destructor"<<endl;
    }
};


class Hostel {
    public:
    Hostel(){
        cout<<"Hostel Default Constructor"<<endl;
    }
    void print(){
    cout<<"Hostel print function"<<endl;
   }
   ~Hostel(){
        cout<<"Hostel Default Destructor"<<endl;
    }
};


class Student:public College,public Hostel {
    public:
    Student(){
        cout<<"Student Default Constructor"<<endl;
    }
   /* void print(){
    cout<<"Student print function"<<endl;
   }*/
   ~Student(){
        cout<<"Student Default Destructor"<<endl;
    }
};

int main(){

// In a multiple inheritance scenario like this, where Student inherits from both College and Hostel, the order of constructor
//  calls is determined by the order in which base classes are listed during the class definition. In this case, College is listed 
//  before Hostel, so College's constructor is called first, followed by Hostel, and finally, Student. Specifically, the constructor
//   call order is: College, Hostel, and Student. This order ensures that constructors are called from the base class to the most 
//   derived class.

 Student s;
 
// lets suppose know i call the member function print by using "s" object which print will be called
// so here is the answer when we call the data members or member functions using object first it will search inside the it's own class then it will search in
// parent classes

// s.print();

// but what if i comment the print function in the Student class then what because the print function is common in the both parent classes,then it will give ambiguity error
// to remove that error we have solution that is  
// we will call the overriden functions with this syntax
// not just overriden functions but also the data members with the same names are accessed using the same synttax and can assign the value or use the value od data members

s.College :: print();

// the rest basics which we learnt in the intro section are all same and applies for all ineritences

}
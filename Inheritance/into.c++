#include<iostream>
using namespace std;

class vehicle{
    public:
    vehicle(){
        cout<<"vehicle constructor"<<endl;
    }
    vehicle(int num){
        cout<<"vehicle constructor "<<num<<endl;
    }
   void print(){
        cout<<"vehicle class"<<endl;
    }
    ~vehicle(){
        cout<<"vehicle destructor"<<endl;
    }
};

// syntax of inheriting the class class new_class_name: access_specifier(i.e public,private,protected) parent_class_name
//if access_specifier is public all public propertes and behaviors of parent class will be public in here and inside
//child class can access both public and protected properties , if they are inherited as protected then all the properties will
//inherit as protected then may be public doesnot matter , if they are inherited as private all the properties will be private inside it  

class car:public vehicle{  

    public:  
     
  car():vehicle(4){                    
   cout<<"car constructor"<<endl;    
    }   
    
    car(int x,int y):vehicle(y){
        cout<<"car constructor x = "<<x<<" y = "<<y<<endl;
    }

  void print(){             
 cout<<"car class"<<endl; }   

    ~car(){
        cout<<"car destructor"<<endl;
    }                       
};


int main(){
    // vehicle v;
    // car c;
    //order of constructors and destructors call in herited classes 
   // when we define an object of a child class then instead of calling the constructor of child class first, constructor of parent class is called.
   // parent_class_constructor ----> child_class_constructor (order of constructor)
   //same happens in the above declaration

    // And when it comes to the order of destructor the destructor of child class is called first then the destructor of parent class
    //  parent_class_destructor ----> child_class_destructor (order of destructors)


   // But if we defined a parametarised constructor in the parent class then it cannot be called by directly we need to pass the value to it else it will give error
   car d;
   

   // if we want that a user should pass a value to the base class through the child class then we can do so this way
   car n(20,3);
}
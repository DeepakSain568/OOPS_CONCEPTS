#include<iostream>
#include<string>
using namespace std;

//Default constructor is an constructor which doesnot take parameters as well it initializes the data members with certain garbage values

class Student{
    int age;
    int rollno;
    public:
    Student(){                          //default constructor is called automatically just 
                                        //when you create the object you don't need to call it
                                        // there is no return type for constructor because it's not a function of certain type 
cout<<"Default constructor invoked\n";  // int,char student if it was a function of certain type , it would had a return 
                                       // type it's just a constructor looking like a function with the same name of class 
    }};

//parameterized constructor
class student{
    int age;
    int rollno;
    public:
    student(int age,int rollno){ 
        cout<<age<<" "<<rollno;                //default constructor is called automatically just 
        this->age=age;                          //when you create the object you don't need to call it
        this->rollno=rollno;                    // there is no return type for constructor because it's not a function of certain type 
        cout<<"\nDefault constructor invoked\n";  // int,char student if it was a function of certain type , it would had a return 
        cout<<age<<"  "<<rollno;                // type it's just a constructor looking like a function with the same name of class 
      
      
    }
};

// The following syntax is used to define a constructor outside of a class:

// <class-name>: :<class-name> (list-of-parameters){ // constructor definition}  

//copy constructor

class Teacher{
    string University_name;
    string teacher_name;
      public:
    Teacher(string University_name,string teacher_name){
        this->University_name=University_name;
        this->teacher_name=teacher_name;
         cout<<"\nUniversity_name-->"<<this->University_name<<"\nteacher_name-->"<<this->teacher_name;
    }
    // Teacher(Teacher *T){
    //     University_name=T->University_name;
    //     teacher_name=T->teacher_name;

    // }
  void show(){
    cout<<"\nUniversity_name-->"<<this->University_name<<"\nteacher_name-->"<<this->teacher_name; 
  }
};

int main(){
    student s1(21,22);
    Teacher T1("RGPV","Priyanka");
    Teacher T2(T1);
    T2.show();
    Teacher *T3 = new Teacher(T1);
    Teacher *T4 = new Teacher("DTU","Shayanti");
    Teacher *T5 = new Teacher(*T4);
    Teacher T6(*T5);
    cout<<"\n\nThis is T3 dynamic object copy of T1 static object ";
    T3->show();
       cout<<"\n\nThis is T4 dynamic object";
    T4->show();
      cout<<"\n\nThis is T5 dynamic object copy of T4 Dynamic object";
    T5->show();
      cout<<"\n\nThis is T6 static object copy of T5 dynamic object";
    T6.show();

    //copy assignment operator that is '='
         cout<<"\n\nby using Copy assignment operator i have copied values of T1 static object into T5 dynamic object and T5 dynamic object into new T7 Object";
         *T5=T1;
    Teacher T7(*T5);
    T7.show();

}
#include<iostream>
using namespace std;

// https://www.javatpoint.com/cpp-inheritance (inheritance from here)
//single inheritance
class example_1{
    private:
    int a;
    public:
    int func(int val){
       val = val*val;
       return val;
    }
};


class example_2 : protected example_1{
    public:
  int b ;
  example_2(){
    b = func(3);
  }
};

//multilevel inheritance
class College{
  public:
char student_name;
char Professer_nmae;
char library;
void student_info(char name){
  student_name = name;
  cout<<student_name;
}};

class Teacher:public College{
  protected:
char Teacher_Name;
void Teacher_Info(char teacher_name){
  Teacher_Name = teacher_name;
}
};

class Department:public Teacher{

};

//multiple inheritance 
// class example : visibility-mode class_1, visibility-mode class_2,visibility-mode class_3{
// }
//  using scope resolution operator to remove ambiguity (Ambiguity can be occurred in using the multiple inheritance when a function with the same name occurs in more than one base class.)
// class C : public A, public B  
// {  
//     void view()             
    // {     // we will be using the scope resolution operator to acces particular elements of a either in derived class or in main class 
//         A :: display();        // Calling the display() function of class A.  
//         B :: display();       // Calling the display() function of class B.   
//     }
// };  


int main(){
    example_2 ex2;
   cout<< ex2.b<<"\n";
   Department d1;
   d1.student_info('D');
}
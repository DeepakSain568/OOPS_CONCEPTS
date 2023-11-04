#include<iostream>
#include<string>
using namespace std;

//Encapsulation: encapsulation is about combining data and methods in one frame together like we do in classes where data memebers represent 
//data and member functions are methods and they together represents encapsulation
//example

class Encapsulation{
    int a;
    int func(){};
};

//Abstraction: abstraction is all about hiding the important or significant details which are of no use to end user, example lets say in a tv remote
// when we are operating it we are only worried about buttons on it and knowing the info which button is for what, we don't care about how it's build
//what it looks like inside what is been done to make buttons such well functioning.
// so this is called abstraction hiding unnecessery details from the user and just showing the datils to them which matters to them
// how can we achieve this by using the access modifiers in classes we can achieve abstraction 
//public:- the data members & methods inside it are available for use globally but after the class definition in c++
//protected:- data members & methods inside it are available for use to it's child classes which inherit from this class
//private:- data members & methods inside it are private to class which means they are inaccessible outside the class only available to use inside the class
 
  class Employee{

    private:
    int phoneNumber;
    string Address;

    protected:
    int SalaryCalculationMethod(){}
    int AttendanceCalculator(){}

    public:
    string name;
    int salary;
    string department;
    int No_of_days_present;
};
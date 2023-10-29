#include<iostream>
using namespace std;

// constant functionsz are those which doesnot try to make any changes on the current object properties , like by using this pointer,
// this pointer stores address of current object.
class Fraction{
    public:
    int numerator;
    int denominator;
    Fraction(int numerator,int denominator){
        this->numerator = numerator;
        this->denominator=denominator;
    }
   
  void print(){
    cout<<numerator<<"/"<<denominator<<endl;
   }

   void simplify(){
    int gcd =1;
    int j=denominator;
    for(int i=1; i<=j; i++){
        if(numerator%i==0 && denominator%i==0){
             gcd = i;
        }
    }
    numerator = numerator/gcd;
    denominator = denominator/gcd;
   }

 Fraction operator+(Fraction const &f2) const{   //here we are passing refernce values that to constant reason for that is 
    int lcm = denominator * f2.denominator;     // we passed objects reference to avoid copying , and to stop illegal changes 
    int x = f2.denominator*numerator;          //  we passed constant reference.
   int y = denominator*f2.numerator;
   int num = x+y;
   Fraction newFrac(num,lcm);
   newFrac.simplify();
    return newFrac;
 }

 Fraction operator*(Fraction const &f) const{
    int x = numerator*f.numerator;
    int y= denominator*f.denominator;
    Fraction newFrac(x,y);
    newFrac.simplify();
    return newFrac;
 }
 
 bool operator==(Fraction const &f) const{
    if(numerator/denominator == f.numerator/f.denominator){
      return true;
    }
    return false;
 }
  //pre-increment
 Fraction& operator++() {                   // in this i am returning the object itself because when we perform increment on object
    numerator = numerator+denominator;   // or variable it not just icrements itself but also returns the value so for that we are returning
    return *this;                       // but why are we returning reference "Fraction&" because when we will be doing multiple increments
                                       // like ++(++f2) in this ++f2 will return the object *this which will be the incremented object of f2,
                                       //but when it is received here ++( "here") it will create copy of that return a temporary bufferand know this
 }                                     // temporary buffer will be passed to operator++ function which will definetly do the increment but that increment will not
                                      // be reflect on f2 object itself but it will return the the ++(++f2) result successfully.
                                      // try it once and see if you still don't understand watch the operator overloading video 2 of oops 2 c+++ datastructure course.


//post-increment
Fraction operator++(int){
    Fraction Fnew(numerator,denominator);
    numerator = numerator+denominator;
    simplify();
    return Fnew;
}

Fraction& operator+=(Fraction const &f){
   int lcm = denominator * f.denominator;
   numerator = numerator*f.denominator + f.numerator*denominator; 
   denominator = lcm;
   simplify();
   return *this;
}

};

/*
int i=5;
preincrement ++i
postincrement i++
the result of both type of increment on i will be be same they will increase i by on1 but,
the difference comes in while using , while assigning them
int j = ++i; (preincrement says first increment then use)
int k = i++ (post increment says first use then increment)
that is why output of j is 6 and output of k is 5
*/

 int main(){
    Fraction f1(10,2);
    Fraction f2(7,4);
    Fraction f0(5,1);
    Fraction f3 = f2 + f1;
   //  f3.print();
   //  Fraction f4 = f2 * f1;
   //  f4.print();
   //  if(f1==f0)cout<<"Equal"<<endl;
   //  else cout<<"Not Equal"<<endl;
   //  Fraction f5 = ++f2;
   //  f2.print();
   //  f5.print();
   //  Fraction f6 = ++(++f2);
   //  f2.print();
   //  f6.print();
   /* cout<<"Just post increment"<<endl;
    Fraction f7 = f0++;
    f7.print();
    f0.print();*/
    
   //  f1 +=f2;
   //  f1.print();
   //  (f0 += f3) += f3;
   //  f0.print();
   //  f3.print();


 }
#include<iostream>
using namespace std;

class A{
  int a;
  public:
  static int b;
  static void printa(int a){        // bit if i don't pass a value to function it will give error that we cannot access
  cout<<a<<" b--> "<<b;                         // non static data members inside the static function i.e means we can only access static
  }                                // data members inside static functions;
                                   // and yes static functions doesn't have access to this pointer, because this pointer stores
                                   //the current objects address, but static functions are object independent these are class 
                                   // properties , class methods so they don't require this function.
};
 int A::b=1;

int main(){
    A a1;
    cout<<A::b<<endl;
}
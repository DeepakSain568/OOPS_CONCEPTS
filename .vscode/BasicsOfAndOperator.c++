#include<iostream>
using namespace std;

int z =10;
int& fun(){
    cout<<&z<<endl;
    return z;
}


int main(){
//  int x =93;
//  int *p = &x;
//  int &y = x;
//  y = 39;
//  cout<<&x<<endl;
//  cout<<&y<<endl;
//  cout<<p<<endl;
//  cout<<*p<<endl;
//  cout<<y<<endl;
//  cout<<x<<endl;
int &y = fun();
y = 33;
cout<<z;
}
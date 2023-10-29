#include<iostream>
using namespace std;

class student{
int Age;
char *name;

public:
student(int Age,char*name){
    this->Age = Age;
    this->name=name;
}
void display(){
    cout<<Age<<" "<<*name<<"\n";
}
};

int main(){
    char name[]= "abcd";
    student s1(20,name);
    s1.display();
    name[3]='e';
     student s2(24,name);
    s2.display();
    s1.display();
}
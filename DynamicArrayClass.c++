#include<iostream>
using namespace std;

class NewArray{
    int *data;
    int NextIndex;
    int size;
    public:
    NewArray(){
        data = new int[1];
       NextIndex = 0;
       size =1;
    }

   void AddNewElement(int num){
    if(NextIndex>=size-1){
        size *= 2;
        int * newArray = new int[size];

        data = newArray;
    }
       data[NextIndex] = num;
       NextIndex++;
   }

};

int main(){
   int * arr =new int[2];
   arr[0]=99;
   arr[1]=2;
   int *newarr =new int[4];
   newarr = arr;
   
   for(int i=0; i<2; i++)
   cout<<newarr[i]<<endl;
}
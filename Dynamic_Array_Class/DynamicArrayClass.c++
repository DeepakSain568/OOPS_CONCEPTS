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

    NewArray(NewArray const &obj){                         //copy constructor working for both shallow and deep copy and implementation of deep copy for this class
        // this->data = obj.data; // shallow copy
        // this is deep copy
        this->data = new int[size];
        for(int i=0; i<obj.NextIndex; i++)
        {data[i]=obj.data[i];}

        this->NextIndex = obj.NextIndex;
        this->size = this->size;
    }
    void operator=(NewArray const &obj){                         
        this->data = new int[size];
        for(int i=0; i<obj.NextIndex; i++)
        {data[i]=obj.data[i];}
        this->NextIndex = obj.NextIndex;
        this->size = this->size;
    }

   void AddNewElement(int num){
    if(NextIndex==size){
    int * newArray = new int[size*2];
    for(int i=0; i<NextIndex; i++)
    {newArray[i]=data[i];}
    data = newArray;
    size *=2;
    }
    data[NextIndex] = num;
    NextIndex++;
   }
    
   void Add(int position, int value){
    if(position>NextIndex) return;
    else if(position<NextIndex){
    data[position] = value;
    }
    else {
    AddNewElement(value);
    }
    }

   int Get(int position) const{
    if(position<NextIndex){
    return data[position];
     }
    else return -1;
    }
   
   int SIZE(){return size;}

   void Print() const{
    for(int i=0; i<NextIndex; i++){
    cout<<data[i]<<" ";
    }
    cout<<endl;
   }
};

int main(){
 NewArray A1;
  A1.AddNewElement(5);
  A1.AddNewElement(2);
  A1.AddNewElement(7);
  A1.AddNewElement(0);
  A1.AddNewElement(1);
  A1.AddNewElement(54);
  cout<<A1.SIZE()<<endl;
  A1.Print();
   cout<<A1.Get(2)<<endl;
   cout<<A1.Get(8)<<endl;
   cout<<A1.Get(6)<<endl;
  NewArray A2(A1);   // copy constructor by default does shallow copy that while it is copying the data of A1 into A2 during the copy of one 
  A1.Add(1,90);   // array into another array it is copying the address of dynamic array pointer of A1 into the pointer array of A2, instead of 
  A1.Print();    // copying the inside data of array into the array of A2 object. for that we will modify the copy constructor of the class to
  A2.Print();   // allow it to do deep copy instead of shallow copy
 
  NewArray A3 =  A2;    // even the copy assignment operator also does shallow copy not deep copy so we will use here operator overloading for this operator
   A3.Print();
}
//Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted,
//doubles the  capacity automatically when elements exceed the current capacity
//declaration-
// #include<vectors>
//vector<int> varName;
//to insert new element varName.push_back(data);
//to remove last element varName.pop_back();
//to get size of vector varName.size();
//to get the capacity of vectors varName.capacity();
//to show element varName.at(index); safer, gives errors when not in range
//also can be uses cout<<varName[index];, gives output if in range, if not prints garbage

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a1;

    cout<<"size of vector before is= "<<a1.size()<<endl;
    cout<<"capacity of vector before is= "<<a1.capacity()<<endl;

    for(int i=0;i<=9;i++){
        a1.push_back(i);
        //we can modify the data using 
        a1[5]=100;
        cout<<a1.at(i)<<endl;
    }

    cout<<"size of vector after is= "<<a1.size()<<endl;
    cout<<"capacity of vector after is= "<<a1.capacity()<<endl;
}
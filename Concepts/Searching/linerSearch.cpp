//Simple Linear search
#include<iostream>
//#include<>;
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of array- ";
    cin>>size;
    
    int Array[size];

    cout<<"Enter data in the array- "<<endl;
    for(int i=0;i<=size-1;i++){
        cin>>Array[i];
        cout<<"saved>"<<Array[i]<<endl;
    }

    int item;bool found=false;
    cout<<"Enter element to find- "<<endl;
    cin>>item;

    //linear search
    for(int i=0;i<=size;i++){
        if(Array[i]==item){
            found=true;
            cout<<"The element is at "<<i<<" th position in the list"<<endl;
        }
    }
    if(found==false){
        cout<<"Element is not in the list"<<endl;
    }


    

}
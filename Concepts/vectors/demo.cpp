//Comment Here Chad😂😉
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    //Now showing a simple demonstration for vectors template in c++
    vector<int> vect;
    cout<<"Enter the no of elements to enter in the vector="<<endl;
    cin>>n;

    cout<<"Data entered in the vector successfully"<<endl;
    cout<<"Now showing the size of the vector"<<vect.size()<<endl;
    cout<<"Now showing the capacity of the vector"<<vect.capacity()<<endl;
    
    cout<<"Enter elements in the array"<<endl;
    int data;
    for(int i=0;i<=n;i++){
        cin>>data;
        vect.push_back(data);
        cout<<"size-"<<vect.size()<<"|capacity-"<<vect.capacity()<<endl;
    }

    cout<<"Now Showing the data entered in the vector"<<endl;
    for(int i=0;i<=n;i++){
        cout<<vect.at(i)<<endl;
        cout<<"size-"<<vect.size()<<"|capacity-"<<vect.capacity()<<endl;
    }
    cout<<"Data entered in vector is shown successfully"<<endl;
    cout<<"Now showing the size of the vector"<<vect.size()<<endl;
    cout<<"Now showing the capacity of the vector"<<vect.capacity()<<endl;

    cout<<"so as you can see with filling of data in the list, The vector continously increases its size and its capacity"<<endl;
    cout<<"This is vector<<"<<endl;
}
//this program will demonstrate working of pointers
#include <iostream>
using namespace std;
int main(){

    cout<<"//creating a variable with some value."<<endl;
    int a = 10;

    cout<<"//printing its default value."<<endl;
    cout<<a<<endl;

    cout<<"//printing with & gives its memory address."<<endl;
    cout<<&a<<endl;

    cout<<"//now creating pointer"<<endl;
    int *ptr;

    cout<<"//gives the address of pointer"<<endl;
    cout<<ptr<<endl;

    cout<<"//pointer stores the address of a"<<endl;
    ptr=&a;
    
    cout<<"//pointer prints value of element address"<<endl;
    cout<<*ptr<<endl;
    

}
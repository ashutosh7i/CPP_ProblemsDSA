//testing diffrent types of streams in c++

#include<iostream>
#include<string>
using namespace std;
int main(){
    string test;
    cin>>test;

    //Left alignment
    cout.setf (ios::left);
    cout.width(30);
    cout<<test;

    //right alignment
    cout.setf (ios::right);
    cout.width(30);
    cout<<test;

    //precised output
    cout.setf (ios::fixed);
    cout.precision(2);
    cout<<test;

    cout.setf (ios::showpos);
    cout<<test<<endl;

    //bool alpha,shows value of a bool variable in text.
    bool b=true;
    bool c=false;
    cout.setf (ios::boolalpha);
    cout<<b<<endl;
    cout.setf (ios::boolalpha);
    cout<<c<<endl;

    //manipulators,used with stream to manipulate output. eg- endl; manipulator
    //hex/oct/dec manipulators
    //defined in c++ to convert base of the integer
    int i = 256;
    cout<<"Hex= "<<showbase<<hex<<i<<endl;
    cout<<"Oct= "<<showbase<<oct<<i<<endl;
    cout<<"Dec= "<<showbase<<dec<<i<<endl;

    
    
    return 0;
}
//file io is done using the fstream class
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    cout<<"opening a file name test.txt"<<endl;

    //opening file for writing
    ofstream writer("test.txt");
    //exception handling
    if (!writer){
        cout<<"Failed to open the file"<<endl;
    }
    //writing
    writer<<"Hello, this was written by c++";
    writer.close();     //closing the file

    //reading file for writing
    ofstream reader("test.txt");
    //exception handling
    if (!reader){
        cout<<"Failed to open the file"<<endl;
    }
    //reading
    string out;
    reader>>out;
    cout<<out<<endl;
    reader.close();
    
}
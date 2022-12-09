//row major traversal;

#include<iostream>
using namespace std;
int main(){

//initialization
int row=4,column=4;
int a[row][column]={{11,12,13,14},
                    {21,22,23,24},
                    {31,32,33,34},
                    {41,42,43,44}};

//printing the array
    cout<<"array before row major"<<endl;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"array after row major"<<endl;
    //applying row major
    for(int i=0;i<=row-1;i++){
        for(int j=0;j<=column-1;j++){
            cout<<a[j][i]<<" ";
        }
    }

}

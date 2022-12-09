//row major traversal;

#include<iostream>
using namespace std;
int main(){

//initialization
int row=4,column=4;
int a[row][column]={{11,12,13,14},{21,22,23,24},{31,32,33,34},{41,42,43,44}};

//long way initialization
// int a[4][4];
//     a[0][0] = 11;
//     a[0][1] = 12;
//     a[0][2] = 13;
//     a[0][3] = 14;
//     a[1][0] = 21;
//     a[1][1] = 22;
//     a[1][2] = 23;
//     a[1][3] = 24;
//     a[2][0] = 31;
//     a[2][1] = 32;
//     a[2][2] = 33;
//     a[2][3] = 34;
//     a[3][0] = 41;
//     a[3][1] = 42;
//     a[3][2] = 43;
//     a[3][3] = 44;

//printing the array
    cout<<"array before row major"<<endl;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"array before row major"<<endl;
    //applying row major
    for(int i=0;i<=row-1;i++){
        for(int j=0;j<=column-1;j++){
            cout<<a[i][j]<<" ";
        }
    }

}


// int Printing(int array[][],int row,int column){
//     //traversal
//     for(int i=0;i<=(row-1);i++){
//     for(int j=0;j<=(column-1);j++){
//         cout<<array[i][j]<<"\t";
//     }
//     cout<<endl;
// }
// }

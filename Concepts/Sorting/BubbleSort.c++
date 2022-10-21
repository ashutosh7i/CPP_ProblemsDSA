#include <iostream>
using namespace std;
int main(){

    int list[]={10,35,6,3,7,67};
    //

    //size of array
    int size=(sizeof(list)/sizeof(list[0]));

    cout<<"list before swap"<<endl;
    for (int i=0;i<=size-1;i++){:he
        cout<<list[i]<<endl;
    }

    int pass1=0,pass2=0;
    //implementing bubble sort /
    for (int j=0;j<=size-1;j++){
        pass1++;
    for (int i=0;i<=size-1;i++){
        pass2++;
        if (list[i]>list[i+1]){
            //swapping
            int temp = list[i];
            list[i] = list[i+1];
            list[i+1] = temp;
        }
    }
    }

    cout<<"pass1="<<pass1<<endl;
    cout<<"pass2="<<pass2<<endl;
    cout<<"list after swap"<<endl;
    //printing list after swap
    for (int i=0;i<=size-1;i++){
        cout<<list[i]<<endl;
    }
}
// Write a C++ program to find the largest element of a given array of integers
#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"enter the size of the array"<<endl;
    cin>>n;

    int Arr[n];

    cout<<"enter Elements in the array"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>Arr[i];
    }
    cout<<"No Bug1";

    //finding second largest element in the array
    int largest=0;
    for(int i=0;i<=n-1;i++){
        cout<<"No Bug2";
        for (int j=n;j>=i;j++){
            cout<<"No Bug3";
            if (Arr[i]>=Arr[j]){
                largest=Arr[i];cout<<"No Bug4";
            }
            else if (Arr[i]<=Arr[j]) {
                largest=Arr[j];cout<<"No Bug44";
            }
        }
    }
cout<<"No Bug";

    
    cout<<"Elements in the array are- "<<endl;
    for (int i=0;i<=n-1;i++){
        cout<<Arr[i]<<endl;cout<<"No Bug5";
    }
cout<<"No Bug";

    cout<<"Largest Element in Array is- "<<largest<<endl;
    cout<<"No Bug";
}
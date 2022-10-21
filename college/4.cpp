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

    //finding largest element in the array
    int largest=0;
    for(int i=0;i<=n-1;i++){
        for (int j=n;j>=i;j++){
            if (Arr[i]>=Arr[j]){
                largest=Arr[i];
            }
            else if (Arr[i]<=Arr[j]) {
                largest=Arr[j];
            }
        }
    }


    
    cout<<"Elements in the array are- "<<endl;
    for (int i=0;i<=n-1;i++){
        cout<<Arr[i]<<endl;
    }


    cout<<"Largest Element in Array is- "<<largest<<endl;
    return 0;
}

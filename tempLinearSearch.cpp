//temporary liner search program
#include<iostream>
using namespace std;

int main(){
    //array to be used for search
    int arr[]={11,23,435,3241,65,4423,54,433,3415473,431,322,53,455,734,334,1,4,64,3,5,94,34,45,33,43};

    int arrSize= sizeof(arr)/4;

        for(int i=0;i<=arrSize;i++){
        if(arr[i]==6){
            cout<<"found at "<<i+1<<endl;
            break;
        }
    }

}
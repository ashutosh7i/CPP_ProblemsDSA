#include <iostream>
using namespace std;
int main(){
        int start;
        int end;
        cout<<"enter two numbers to get sum of all digits betweent them"<<endl;
        cin>>start>>end;
        int sum=0;
        for (int i=start; i <= end; i++) {
            sum=sum+i;
        }
        cout<<sum<<endl;
    }

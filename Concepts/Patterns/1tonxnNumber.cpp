//will print a nxn pattern with 1,1,1
                              //2,2,2
                              //3,3,3 pattern
#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
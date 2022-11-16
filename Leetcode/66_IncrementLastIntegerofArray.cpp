//given a vector named digits containing n elements[1,2,3,4]
//task is to increment the last number of the list
//so result will be [1,2,3,5]

#include<iostream>
#include<vector>
using namespace std;

int main(){
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // int size = digits.size();
        // int elementAtLast = digits.at(size-1);
        // digits[size-1]=elementAtLast+1;
    for(int i=digits.size()-1;i>=0;i--){
    if(digits[i]<9){
        digits[i]++;
        return digits;
    }
        else{
            digits[i]=0;
        }
    }
        digits.push_back(0);
            digits[0] = 1;
            return digits;
        
    }
};

}
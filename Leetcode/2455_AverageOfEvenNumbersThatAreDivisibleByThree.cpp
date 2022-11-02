//Comment Here Chad😂😉
#include<iostream>
#include<vector>
using namespace std;
// 2455. Average Value of Even Numbers That Are Divisible by Three
// Given an integer array nums of positive integers,return the average value of all even integers that are
// divisible by 3 .
// Note that the average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.
    int averageValue(vector<int>& nums) {
        
        //temp vector to hold even numbers divisible by 3
        vector<int> temp;
        
    //to get all even numbers which are divisible by 3
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)%3==0){//if it is divisible by 3
                temp.push_back(nums.at(i));
        }
        }
    //to find the average of elements in the temp array
            int sum;//to hold sum for doing average
            for(int i=0;i<=temp.size();i++){
                sum += temp.at(i);
            }
        //returning a double value, average is double
        return (double)sum/temp.size();
            
    }


class Solution {
public:
    int averageValue(vector<int>& nums) {
        
        //temp number to hold even numbers divisible by 3
        int sum=0;
        
    //to get all even numbers which are divisible by 3
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)%3==0){//if it is divisible by 3
                sum+=nums.at(i);
        }
        }
    //to find the average of elements in the temp array
        //returning a double value, average is double
        if(sum==0)return 0;
        return sum/sizeof(sum);
    }
};



}

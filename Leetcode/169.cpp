#include<iostream>
using namespace std;

void majorityElement(int nums[9]) {
        int n=9;
        sort(nums.begin(),nums.end());
        return nums[n/2];
    
    }    
    int main(){
        int num[9]={1,2,3,2,2,1,2,2,1};
        majorityElement(num[]);
    }
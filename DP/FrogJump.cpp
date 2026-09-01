#include <iostream>
#include<vector>
using namespace std;
int frogjump(vector<int>nums){
    int n=nums.size();
    if(n==1){
        return 0;
    }
    vector<int>dp(n);
    dp[0]=0;
    dp[1]=abs(nums[0]-nums[1]);
    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-1]+abs(nums[i]-nums[i-1]),dp[i-2]+abs(nums[i]-nums[i-2]));
    }
    return dp[n-1];
}
int main(){
    vector<int>nums={30,20,50,10,40};
    cout<<frogjump(nums);
    return 0;
}
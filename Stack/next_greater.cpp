#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={6,8,0,1,3};
    stack<int>st;
    vector<int>ans(vec.size());
    int n=vec.size();
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<vec[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }else{
            ans[i]=st.top();
        }
        st.push(vec[i]);
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}
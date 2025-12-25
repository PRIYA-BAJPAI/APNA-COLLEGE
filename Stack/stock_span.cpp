#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> stock_span(vector<int> &price){
    vector<int> ans(price.size()); //imp to declare the size of ans
    stack<int>st;
    int prevHigh;
    for(int i=0;i<price.size();i++){
        if(st.size()==0){ //boundary condition
            ans[i]= i+1;
        }else if(price[st.top()]>price[i]){
            prevHigh=st.top();
            ans[i]=i-prevHigh;
        }else{
            while(st.size()>0 && price[st.top()]<=price[i]){
                st.pop();
            }
            prevHigh=st.top();
            ans[i]=i-prevHigh;
        }
        st.push(i);
    }
    return ans;
}

int main(){
    vector<int>price={100,80,60,70,60,75,85};
    vector<int>ans=stock_span(price);
    for(int i=0;i<price.size();i++){
        cout<<ans[i]<<" ";
    }
}
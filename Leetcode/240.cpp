#include<iostream>
using namespace std;
#include<vector>

bool isExist(vector<vector<int>> &arr , int target){
    int row=arr.size();
    int col=arr[0].size();
    int r=0;int c=col-1;
    while(r<row && c>=0){
        if(target==arr[r][c]){
            return true;
        }else if(target>arr[r][c]){
            r++;
        }else{
            c--;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> arr ={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target=100;
    if(isExist(arr,target)){
        cout<<target<<" Exist"<<endl;
    }else{
        cout<<target<<" do not exist"<<endl;
    }
    return 0;
}
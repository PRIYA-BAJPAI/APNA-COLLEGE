#include<iostream>
#include<vector>
using namespace std;
bool isExist(vector<vector<int>> &arr,int target){ //& is used before array to pass by const reference which maintains the time and space complexity as compare to pass by value(not using & before arr) it copies the original array.
    int row=arr.size();
    int col=arr[0].size();
    //finding target row
    int strow=0;
    int endrow=row-1;
    while(strow<=endrow){
        int midrow=strow+(endrow-strow)/2;
        if(arr[midrow][0]<=target && target<=arr[midrow][col-1]){
            //finding target
            int st=0;
            int end=col-1;
            while(st<=end){
                int mid=st+(end-st)/2;
                if(arr[midrow][mid]<target){
                    st=mid+1;
                }else if(arr[midrow][mid]>target){
                    end=mid-1;
                }else{
                    return true;
                }
            }
            return false;
        }else if(target>arr[midrow][col-1]){
            strow=midrow+1;
        }else{
            endrow=midrow-1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
    int target=1005;
    if(isExist(arr,target)){
        cout<<target<<" Exist ."<<endl;
    }else{
        cout<<target<<" do not exist ."<<endl;
    }
    return 0;
}
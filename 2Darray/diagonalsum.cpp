#include<iostream>
using namespace std;
int diagonal_sum(int arr[][4]){
    int sum=0;
    for(int i=0;i<4;i++){
        sum+=arr[i][i];
        if(i!=3-i){
            sum+=arr[i][3-i];
        }
    }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         if(i==j){
    //             sum+=arr[i][j];
    //         }else if(j==3-i){
    //             sum+=arr[i][j];
    //         }
    //     }
    // }
    return sum;
}
int main(){
    int arr[4][4];
    cout<<"input elements"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"diagonal sum is "<<diagonal_sum(arr);
    return 0;
}
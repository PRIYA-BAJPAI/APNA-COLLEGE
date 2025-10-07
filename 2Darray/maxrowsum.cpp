#include<iostream>
using namespace std;
int max_row_sum(int arr[][3]){
    int sum=0;
    int max=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            sum=sum+arr[i][j];
            if(max<sum){
                max=sum;
                
            }
            sum=0;
        }
    }
    return max;
}
int main(){
    int arr[3][3];
    cout<<"input elements"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"max is "<<max_row_sum(arr);
    return 0;
}
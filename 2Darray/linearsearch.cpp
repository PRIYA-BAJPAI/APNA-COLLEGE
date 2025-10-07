#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"input elements"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"matrix is"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   int s;
   cout<<"enter no to search : ";
   cin>>s;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j]==s){
            cout<<"element found at ["<<i<<"]["<<j<<"]";
        }
    }
   } 
    return 0;
}
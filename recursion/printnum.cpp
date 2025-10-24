#include<iostream>
using namespace std;
int printnum(int n){
    if(n==1){
        cout<<n<<" ";
        return 0;
    }
    cout<<n<<" ";
    printnum(n-1);
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    printnum(n);
    return 0;
}
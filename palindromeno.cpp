#include<iostream>
#include<climits>
using namespace std;
bool palindrome(int n){
     int number=0;
     int copy=n;
     if(n<0) return false;
     else{
    while(n!=0){
        int last_dig=n%10;
        if(number>INT_MAX/10 || number<INT_MIN/10){
            return 0;
        }
        number=number*10+last_dig;
        n=n/10;
    }
    if(number==copy) return true;
    return false;
}
}
int main(){
     int n=050;
     if(palindrome(n)){
        cout<<"no. is a palindrome."<<endl;
     }else{
        cout<<"no. is not a palindrome."<<endl;
     }
     return 0;
}
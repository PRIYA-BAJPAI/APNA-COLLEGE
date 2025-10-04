#include<iostream>
#include<limits.h>
using namespace std;
int reverse(int n){
    int number=0;
    while(n!=0){
        int last_dig=n%10;
        if(number>INT_MAX/10 || number<INT_MIN/10){
            return 0;
        }
        number=number*10+last_dig;
        n=n/10;
    }
    return number;
}
int main(){
    int n=51422;
    cout<<reverse(n)<<endl;
    return 0;
}
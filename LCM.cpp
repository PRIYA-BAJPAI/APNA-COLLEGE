#include<iostream>
using namespace std;
int gcd_recurtion(int a,int b){ //considering a>b
     if(b==0)return a;
     return gcd_recurtion(b,a%b);
}
int lcm(int a,int b){
    int gcd=gcd_recurtion(a,b);
    return (a*b)/gcd_recurtion(a,b);
}
int main(){
    cout<<lcm(25,35)<<endl;
    return 0;

}
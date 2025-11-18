#include<iostream>
using namespace std;
void reverse(string S,int i){
    if(i<0)
    return ;
    cout<<S[i];
    return reverse(S,i-1);
}
int main(){
    string S="MANGO";
    int i=4;
    reverse(S,i);
    return 0;
}
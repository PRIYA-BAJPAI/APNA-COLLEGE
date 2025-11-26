#include<iostream>
using namespace std;
void increment(){
    int x=0;  //static nhi hai iske karan x baar baar initialise 0 se hoga 
    cout<<"x : "<<x<<endl;
    x++;
}
int main(){
    increment();
    increment();
    increment();
    return 0;
}
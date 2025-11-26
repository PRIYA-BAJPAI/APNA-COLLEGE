#include<iostream>
using namespace std;
void increment(){
    static int x=0;  //static ke karan x baar baar initialise nhi hoga wo previous value se hi start hoga 
    cout<<"x : "<<x<<endl;
    x++;
}
int main(){
    increment();
    increment();
    increment();
    return 0;
}
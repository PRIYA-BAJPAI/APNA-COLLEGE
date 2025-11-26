#include<iostream>
using namespace std;
class increment{
    public:
    int x;
    void inc(){
        x=x+1;
    }
};
int main(){
    increment obj;
    obj.x=0;
    cout<<obj.x<<endl;
    obj.inc();
    cout<<obj.x<<endl;
    return 0;
}
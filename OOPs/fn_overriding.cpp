#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"I am Parent.."<<endl;
    }
};
class Child{
    public:
    void show(){
        cout<<"I am Child.."<<endl;
    }
};
int main(){
    Child c1;
    c1.show();
    cout<<" and "<<endl;
    Parent p1;
    p1.show();
    return 0;
}
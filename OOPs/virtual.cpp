#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"I am Parent.."<<endl;
    }
    virtual void hello(){
        cout<<"hey this is parent"<<endl;
    }
};
class Child{
    public:
    void show(){
        cout<<"I am Child.."<<endl;
    }
    void hello(){
        cout<<"hey this is child"<<endl;
    }
};
int main(){
    Child c1;
    c1.hello();
    return 0;
}
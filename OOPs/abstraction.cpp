#include<iostream>
using namespace std;
class Shape{  //abstract class
    virtual void draw()=0;  //pure virtual fn
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
};
int main(){
    Circle c;
    c.draw();
    return 0;
}
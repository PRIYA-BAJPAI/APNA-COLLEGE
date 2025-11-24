#include<iostream>
using namespace std;
class Print{
    public:
    void show(int x){
        cout<<"int : "<<x<<endl;
    }
    void show(char ch){
        cout<<"char : "<<ch<<endl;
    }
};
int main(){
    Print P;
    P.show('&');  //char ch
    P.show(101);  //int x
    return 0;
}
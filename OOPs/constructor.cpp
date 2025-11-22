#include<iostream>
using namespace std;
class Teacher{
    public:
    //constructor
    Teacher(){
        cout<<"Computer Science"<<endl;
    }
    //properties/attributes
    string name;
    string department;
    double salary;
    //methods/member function
    void change(string newdept){
        department=newdept;
    }
};
int main(){
    Teacher t1;
    t1.name="Priya";
    cout<<t1.name;
    return 0;
}
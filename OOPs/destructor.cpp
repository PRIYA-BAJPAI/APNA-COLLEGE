#include<iostream>
using namespace std;
class Teacher{
    public:
    //constructor
    Teacher(){
        cout<<"Hii , I am constructor..."<<endl;
    }
    //properties/attributes
    string name;
    string department;
    double salary;
    //destructor
    ~Teacher(){
        cout<<"Hii , I am destructor..."<<endl;
    }//automatically called by the main function.
};
int main(){
    Teacher t1;
    t1.name="Priya";
    cout<<t1.name<<endl;
    return 0;
}
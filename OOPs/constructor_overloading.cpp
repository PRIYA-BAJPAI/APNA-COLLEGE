#include<iostream>
using namespace std;
class Teacher{
    public:
    //constructor
    Teacher(){
        cout<<"Default Constructor"<<endl;
    }
    Teacher(string n,string d,double s){
        name=n;
        department=d;
        salary=s;
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
    Teacher t1("Priya","cse",3000);
    // Teacher t1;
    cout<< t1.name<<endl;
    cout<< t1.department<<endl;
    return 0;
}
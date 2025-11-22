#include<iostream>
using namespace std;
class Teacher{
    public:
    string name;
    string department;
    double salary;
    //constructor
    Teacher(string name,string department,double salary){
        this->name=name;
        this->department=department;
        this->salary=salary;
    }
};
int main(){
    Teacher t1("Priya","cse",3000);
    Teacher t2(t1);  //default copy constructor
    cout<< t2.name<<endl;
    cout<< t2.department<<endl;
    return 0;
}
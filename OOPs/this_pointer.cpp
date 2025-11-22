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
    cout<< t1.name<<endl;
    cout<< t1.department<<endl;
    return 0;
}
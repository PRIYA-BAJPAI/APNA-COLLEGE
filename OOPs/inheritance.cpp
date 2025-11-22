#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    //name and age is inherited from person
    public:
    int rollno;
    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"rollno : "<<rollno<<endl;
    }
};
int main(){
    Student s;
    s.name="Ramu";
    s.age=17;
    s.rollno=16;
    s.getinfo();
}
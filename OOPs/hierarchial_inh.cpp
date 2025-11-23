#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
};
class Teacher:public Student{
    //name and age is inherited from person
    public:
    string subject;
    
};
class Proff : public Student {
    public:
    string section;

};
int main(){
    Teacher t;
    t.name="dinesh";
    t.age=15;
    t.subject="English";
    Proff p;
    p.name="suresh";
    p.age=23;
    p.section="apple";
    cout<<t.name<<endl;
    cout<<t.age<<endl;
    cout<<t.subject<<endl;
    cout<<p.name<<endl;
    cout<<p.age<<endl;
    cout<<p.section<<endl;
}
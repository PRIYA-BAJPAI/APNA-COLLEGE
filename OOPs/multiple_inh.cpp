#include<iostream>
using namespace std;
class Student{
    public:
    string name;
};
class Teacher{
    //name and age is inherited from person
    public:
    string course;
    
};
class TeachingAssistent : public Student , public Teacher{
    public:
    int section;
    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"course : "<<course<<endl;
        cout<<"section : "<<section<<endl;
    }
};
int main(){
    TeachingAssistent s;
    s.name="Ramu";
    s.section=17;
    s.course="MSC";
    s.getinfo();
}
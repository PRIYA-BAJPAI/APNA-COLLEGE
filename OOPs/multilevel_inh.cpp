#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class PostGraduate : public Person{
    //name and age is inherited from person
    public:
    string course;
    
};
class Graduate : public PostGraduate{
    public:
    int AdhaarNo;
    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"course : "<<course<<endl;
        cout<<"Adhaar no : "<<AdhaarNo<<endl;

    }
};
int main(){
    Graduate s;
    s.name="Ramu";
    s.age=17;
    s.course="MSC";
    s.AdhaarNo=888111;
    s.getinfo();
}
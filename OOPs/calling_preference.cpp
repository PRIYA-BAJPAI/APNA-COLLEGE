#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(){
        cout<<"I am the constructor of Person"<<endl;
    }
    ~Person(){
        cout<<"I am the destructor of Person"<<endl;
    }
};
class Student : public Person{
    //name and age is inherited from person
    public:
    int rollno;
    Student(){
        cout<<"I am the constructor of Student"<<endl;
    }
    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"rollno : "<<rollno<<endl;
    }
    ~Student(){
        cout<<"I am the destructor of Student"<<endl;
    }
};
int main(){
    Student s;
    s.name="Ramu";
    s.age=17;
    s.rollno=16;
    s.getinfo();
}

//conclusion: 
//constructor -> parent > child
//destructor -> child > parent 
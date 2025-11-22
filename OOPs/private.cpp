#include<iostream>
using namespace std;
class Teacher{
    double salary;
    public:
    //setter
    void setSalary(double s){
        salary=s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};
int main(){
    Teacher t1;
    t1.setSalary(100000);
    cout<<t1.getSalary()<<endl;
    return 0;
}
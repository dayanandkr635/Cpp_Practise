// copy constructor
#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int rollnumber ;
    int age;
 
    // copy constructor
    student(const student &s){
        name=s.name;
        rollnumber=s.rollnumber;
        age=s.age;
        cout<<"Copy Constructor is called"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollnumber<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    // creating an object of class student
    student s1;
    s1.name="DAYA";
    s1.rollnumber=101;
    s1.age=19;
    // creating another object of class student using copy constructor
    student s2=s1;
    // displaying student details
    s2.display();
    return 0;
}
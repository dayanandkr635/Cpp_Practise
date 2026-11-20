#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int rollnumber ;
    int age;

    // constructor
    student(){
        name="DAYA";
        rollnumber=101;
        age=19;
        cout<<"Constructor is called"<<endl;
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
    // displaying student details
    s1.display();
    return 0;
}
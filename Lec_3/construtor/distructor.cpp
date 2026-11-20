#include <iostream>
using namespace std;                                                                            

class student{
    public:
    string name;
    int rollnumber ;
    int age;

    // parametrized constructor
    student(string n, int r, int a){
        name=n;
        rollnumber=r;
        age=a;
        cout<<"Parametrized Constructor is called"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollnumber<<endl;
        cout<<"Age: "<<age<<endl;
    }

    ~student(){
        cout<<"Destructor is called for "<<name<<endl;
    }
};

int main(){
    // creating an object of class student
    student s1("DAYA", 101, 19);
    // displaying student details
    s1.display();
    return 0;
}
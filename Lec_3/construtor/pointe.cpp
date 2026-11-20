// pointer
#include <iostream>
using namespace std;

class student{
    public:
    int age;

    void setAge(int age){
        this->age = age; // this will set the age of the object
    }
    void display(){
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    // creating an object of class student
    student s1;
    cout<<s1.age<<endl;
    // setting age using pointer
    s1.setAge(20);
    // displaying student details
    s1.display();
    return 0;
}

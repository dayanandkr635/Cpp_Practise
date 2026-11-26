#include <iostream>
using namespace std;
// function definition
// void printHello(){
//     cout<<"Hello\n";
// }

// int main(){
//     // function call/invoke
//     printHello();
//     printHello();
//     printHello();
//     printHello();
//     printHello();
//     printHello();
// }

int printHello(){
    cout<<"Hello\n";
    return 3;
}

int main(){
    // function call/invoke
    // int val= printHello();
    // cout<<"val:"<<val; or
    cout<<printHello()<<endl;
}

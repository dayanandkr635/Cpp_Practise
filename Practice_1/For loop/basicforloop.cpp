#include <iostream>
using namespace std;
int main(){
    cout<<"Todays Work:learning and revising the for-loop in cpp"<<endl;

    // int n=10;
    // // for(initialization; condition; updation)
    // // {cout<<code}
    // //print counting for 1 to 10

    // for(int i=1; i<=n; i++){
    //     cout<<i<<",";
    // }
    //Take input from the user

    int n;
    cout<<"Enter a number:";
    cin>>n;
//print 1 to n in incresing order
    // for(int i=0; i<=n; i++){
    //     cout<<i<<",";
    // }

//print n times of *
for(int i=0; i<=n; i++){
    cout<<"* ";
}
return 0;
}
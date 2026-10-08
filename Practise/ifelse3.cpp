#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3;
    cout<<"Enter a number: ";
    cin>>n1;
    cout<<"Enter a number: ";
    cin>>n2;
    cout<<"Enter a number: ";
    cin>>n3;

    if(n1>n2 && n1>n3){
        cout<<n1<<" is greater than "<<n2<<","<<n3;

    }
    else if(n2>n1 && n2>n3){
        cout<<n2<<" is greater than "<<n1<<","<<n2;
    }
    else{
        cout<<n3<<" is greater than "<<n1<<","<<n2;
    }
    return 0;
}
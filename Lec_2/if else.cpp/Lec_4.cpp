// Comparison in three number

#include<iostream>
using namespace std;

int main(){

    int n1, n2, n3;

    cout<<" Enter a number N1=";
    cin>>n1;
    cout<<" Enter a number N2=";
    cin>>n2;
    cout<<" Enter a number n3=";
    cin>>n3;

    if(n1>n2 && n1>n3){
        cout<<n1<<" is greater";
    }
    else if(n2>n1 && n2>n3){
        cout<<n2<<" is greater";
    }
    else{
        cout<<n3<<" is greater";
    }

    return 0;
}
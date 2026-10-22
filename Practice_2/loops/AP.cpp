#include <iostream>
using namespace std;
int main(){
    int a,d,n,nth;
    cout<<"Enter a first number:";
    cin>>a;
    cout<<"Enter a d:";
    cin>>d;
    
// Print up to n number
cout<<"Enter n (n=no. of term):";
cin>>n;
nth=a+n*d-d;
    for(int i=a; i<=nth; i+=d){
        cout<<i<<" ";
    }

}
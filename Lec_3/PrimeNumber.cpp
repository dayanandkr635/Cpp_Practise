#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool isprime=true;

    if(n<=1){
        cout<<"Not prime";
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0){
            isprime=false;
            break;
        }
        
    }
    if(isprime){
    cout<<"prime number"<<endl;
    }
    else{
        cout<<"Not prime number"<<endl;
    }
  return 0;  
}
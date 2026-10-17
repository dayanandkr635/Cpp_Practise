#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a BINARY NUMBER:";
    cin>>n;

    int ans=0, pow=1;

    while(n>0){
        int rem=n%10;
        //ans=ans+rem*pow;or
        ans+=rem*pow;
        n=n/10;
        pow=pow*2;
    }
    cout<<ans;
}
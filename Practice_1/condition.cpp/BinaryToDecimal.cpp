#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0, pow=1;
    int count=0;
    while(n>0){
        int rem=n%10;
        ans=ans+rem*pow;
        n/=10;
        pow*=2;
        count++;
    }
    cout<<ans<<endl;
    cout<<count;


    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0, place=1;
    while(n>0){
        int rem=n%2;
        ans=ans+rem*place;
        n/=2;
        place=place*10;

    }
    cout<<ans;
}
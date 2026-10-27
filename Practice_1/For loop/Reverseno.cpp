#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;
    int ans=0, cunt=0;

    while (n>0){
        int rem=n%10;
        ans=ans*10+rem;
        n=n/10;
        cunt=cunt+1;
    }
    cout<<"Revers no:"<<ans<<endl;
    cout<<cunt;

    return 0;
}
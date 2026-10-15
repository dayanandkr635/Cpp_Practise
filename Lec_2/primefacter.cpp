#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;

    for(int i=2; i<=n; i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n<1){
    cout<<"Enter a number greater than 1";
}
}


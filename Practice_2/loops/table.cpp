#include <iostream>
using namespace std;
int main(){
int n;
    cout<<"Enter a number:";
    cin>>n;

    // for(int i=1; i<=10; i++){
    //     cout<<n<<"X"<<i<<"="<<n*i<<endl;
    // }

    // for(int i=n; i<=n*10; i+=n){
    //     cout<<i<<" ";
    // }

    for(int i=n; i<=n*10; i+=n){
        if(i%n==0) cout<<i<<" ";
    }
}
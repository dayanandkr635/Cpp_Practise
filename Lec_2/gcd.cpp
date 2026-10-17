#include <iostream>
using namespace std;

int main(){
    int a,b;
cin>>a>>b;

for(int i=min(a,b); i>=2; i--){
    if(a%i==0 && b%i==0){
        cout<<"GCD:"<<i;
        break;
    }
}
}


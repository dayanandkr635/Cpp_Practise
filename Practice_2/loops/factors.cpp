#include <iostream>
// #include<cmath>
using namespace std;
int main(){
    int n=20;

    for(int i=2; i<=sqrt(20); i++){
        if(n%i==0)
        cout<<i<<" " ;
             if(i != n/i) cout<<n/i<<" ";
        
    }
}
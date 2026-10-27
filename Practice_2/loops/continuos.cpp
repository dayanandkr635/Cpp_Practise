#include <iostream>
using namespace std;
int main(){
    for(int i=0; i<=20; i++){
        // if(i%4 !=0)
        if(i%4==0) continue;
        cout<<i<<" ";
    }
}
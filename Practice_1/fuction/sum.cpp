#include <iostream>
using namespace std;

// sum of two number;
int sum(int a, int b){
    int s=a+b;
    return s;
}
// min of two number;
int minoftwo(int a, int b){
// parametres
    if(a<b) return a;
    else return b;
}
int main(){
    cout<<sum(10,20)<<endl;
    cout<<minoftwo(10,30)<<endl; //arguments
}

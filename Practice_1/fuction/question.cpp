// //  calculate of sum of number from 1 to n
#include<iostream>
using namespace std;

// int sum(int n){
//     int sum=0;
//     for(int i=1;i<=n; i++){
//         sum+=i;
        
//     }
//     return sum;

// }
// int main(){
//     cout<<sum(100)<<endl;
//     cout<<sum(9)<<endl;
//     return 0;
// }

// factorial

int factorialN(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<factorialN(5)<<endl;
    cout<<factorialN(4)<<endl;
}

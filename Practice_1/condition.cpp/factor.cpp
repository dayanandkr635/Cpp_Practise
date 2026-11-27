// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

// }
#include <iostream>
using namespace std;

int main() {

    int n;
    long long fact = 1;

    cout << "Enter number: ";
    cin >> n;
    int count=1;

    for(int i = 1; i <= n; i++) {

        fact = fact * i;
        count++;

    }

    cout << "Factorial = " << fact<<endl;
    cout<<count;

    return 0;
}
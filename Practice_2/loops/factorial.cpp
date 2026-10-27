#include <iostream>
using namespace std;

int main(){
    // Write your solution here
    int n;
    cin>>n;
    int ans=1;

    for(int i=0; i<=n; i++){
        ans=ans*(n-i);
    }
    cout<<ans;
    return 0;
}
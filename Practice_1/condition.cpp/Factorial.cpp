
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fact =1;

    if(n<0) cout<<"Error";
    else {
        for(int i=1; i<=n; i++){
            fact*=i;
        }
        cout<<fact;
    }
}

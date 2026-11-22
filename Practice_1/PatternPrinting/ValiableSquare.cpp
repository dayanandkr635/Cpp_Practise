#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cout<<" * ";
        }cout<<endl;

    }cout<<"\n";

    for(int i=1;i<=n;i++ ){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }cout<<endl;
    }cout<<"\n";

    for(int i=65; i<=65+n;i++){
        for(int j=65; j<=65+n;j++){
            cout<<char(j)<<" ";
        }cout<<"\n";
    }cout<<"\n";

    for(int i=65; i<=65+n;i++){
        for(int j=65; j<=65+n;j++){
            cout<<char(i)<<" ";
        }cout<<"\n";
    }cout<<"\n";
}
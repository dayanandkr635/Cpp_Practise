#include <iostream>
using namespace std;
int main(){
    int n=5;

    for(int i=0;i<5;i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }cout<<endl;
    }cout<<"\n";

       for(int i=65;i<65+5;i++){
        for(int j=65; j<=i; j++){
            cout<<char(j)<<" ";
        }cout<<endl;
    }cout<<"\n";

       for(int i=65;i<65+5;i++){
        for(int j=65; j<=i; j++){
            cout<<char(i)<<" ";
        }cout<<endl;
    }cout<<"\n";

       for(int i=97;i<97+5;i++){
        for(int j=97; j<=i; j++){
            cout<<char(j)<<" ";
        }cout<<endl;
    }cout<<"\n";

     for(int i=1;i<8;i++){
        for(int j=1; j<=i; j++){
            if(i%2==0)
            cout<<char(j+64)<<" ";
            else cout<<j<<" ";
        }cout<<endl;
    }cout<<"\n";

  

}
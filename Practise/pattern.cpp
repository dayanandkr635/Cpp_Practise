//sqare print
#include <iostream>
using namespace std;

int main(){
    int n=5;

    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            cout<<" * ";
        }cout<<endl;
    }cout<<endl;

   
     for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<" * ";
        }cout<<endl;
    }cout<<endl;

     for(int row=0; row<n; row++){
        for(int col=0; col<=row; col++){
            cout<<" * ";
        }cout<<endl;
    }cout<<endl;

    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(col<n-row-1){
                cout<<"   ";
            }else{
                cout<<" * ";
            }
        }cout<<endl;
    }cout<<endl;

    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(col<n-row){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }cout<<endl;
    }
   
    return 0;
}
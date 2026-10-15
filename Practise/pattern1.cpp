#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter a number=";
    cin>>m;

    for(int row=0; row<m; row++){
        for(int col=0; col<m; col++){
            cout<<" * ";
        }cout<<endl;
    }cout<<endl;

    
    int n;
    cout<<"Entear a number jiska mereko tringle banana hai=";
    cin>>n;

    
    for(int row=0; row<n; row++){
        for(int col=0; col<=row; col++){
            cout<<" * ";
        }cout<<endl;
    }
    cout<<endl;

    int l;
    cout<<"Enter a number=";
    cin>>l;

   for(int row=0; row<l; row++){
       for(int col=0; col<row; col++){
           cout<<"   ";
       }
       for(int col=0; col<l-row; col++){
           cout<<" * ";
       }
       cout<<endl;
   }
    
    int a;
     cout<<"Enter a number=";
    cin>>a;
    

    for(int row=0; row<a; row++){
        for(int col=0; col<a-row; col++){
            cout<<" * ";
        }cout<<endl;
    }
    cout<<endl;

     int b;
    cout<<"enter a number=";
    cin>>b;
     for(int row=0; row<b; row++){
         for(int col=0; col<b-row-1; col++){
             cout<<"   ";
         }
         for(int col=0; col<row+1; col++){
             cout<<" * ";
         }cout<<endl;
     }
    
    return 0;
}
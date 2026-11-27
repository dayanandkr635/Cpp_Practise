#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    bool isprime=true;
    if(n<=0) cout<<"Not Prime";
    else{
        for(int i=2; i*i<=n; i++){   
            if (n%i==0) {
                isprime=false;
            break;
            }

        }
    }
    if(isprime){
        cout<<"Prime number";
    }
    else{
        cout<<"Not prime";
    }
}

//     int arr[]={2,3,4,5,8,9,7};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<n<<endl;

//     int maxVal=arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i]>maxVal){
//             maxVal=arr[i];
//         }
//     }cout<<maxVal<<endl;


//     int minVal=arr[0];
//     for(int i=0; i<n;i++){
//         if(arr[i]<minVal){
//             minVal=arr[i];
//         }
//     }
//     cout<<minVal<<endl;

//     int b;
//         cin>>b;
//     int fact =1;

//     if(b<0) cout<<"Error";
//     else {
//         for(int i=1; i<=b; i++){
//             fact*=i;
//         }
//         cout<<fact;
//     }

// }

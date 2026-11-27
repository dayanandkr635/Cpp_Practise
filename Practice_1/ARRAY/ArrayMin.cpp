#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,43,4,5,454,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;

    int minVal=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minVal){
            minVal=arr[i];
        }

    }cout<<minVal;
}


#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,64,56,12,23};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;

    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<endl;
    // }

    // size of arr
    int n=sizeof(arr)/sizeof(int);
    cout<<n;

    int minVal=arr[0];
    for(int i=0;i<n;i++ ){
        if(arr[i] > minVal)
       { minVal=arr[i];}
    }
    cout<<minVal<<'\n';

}
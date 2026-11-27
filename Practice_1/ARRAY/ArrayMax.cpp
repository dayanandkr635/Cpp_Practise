#include<iostream>
using namespace std;
int main(){
    int arr[]={12,23,24,32,54,56};
    int n=sizeof(arr)/sizeof(int);

    int maxVal=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }cout<<maxVal;
}

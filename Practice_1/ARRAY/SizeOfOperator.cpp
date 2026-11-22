#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,56,7,8,5,6,8,6,8,9,9,5,6};
    int n=sizeof(arr);
    cout<<"size of array: "<<n;
    // length of arr
    n=sizeof(arr)/sizeof(int);
    cout<<"Length of arr :"<<n;
}
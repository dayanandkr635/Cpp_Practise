#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,6,4,6,8,6,8,9,6,9,5,8,6,7};

    // size of array
    int m=sizeof(arr);
    cout<<"Size of arr:"<<m<<endl;

    // Length of array
    int n=sizeof(arr)/sizeof(int);
    cout<<"Length of arr :"<<n<<endl;
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
}
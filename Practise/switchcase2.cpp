#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    switch(n){
        case 1:
        cout<<"MONDAY";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thrusday";
        break;

        case 5:
        cout<<"friday";
        break;

        case 6:
        cout<<"saturday";
        break;

        case 7:
        cout<<"sunday";
        break;

        default:
        cout<<" SORRY Enter a number b/w 1 to 7";
        break;
    }
    return 0;
}
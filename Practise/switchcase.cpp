#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    switch(n){
        case 1:
        cout<<"one";
        break;

        case 2:
        cout<<"Two";
        break;

        case 3:
        cout<<"Three";
        break;

        case 4:
        cout<<"Four";
        break;

        case 5:
        cout<<"Five";
        break;

        case 6:
        cout<<"Six";
        break;

        case 7:
        cout<<"Seven";
        break;

        case 8:
        cout<<"Eight";
        break;

        case 9:
        cout<<"Nine";
        break;

        case 10:
        cout<<"Ten";
        break;

        default:
        cout<<"Sorry Enter a number b/w 1 to 10";
        break;

    }
    return 0;
}
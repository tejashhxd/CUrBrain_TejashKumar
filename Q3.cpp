#include <iostream>
using namespace std;

int main(){
    int n, temp = 0, zeros = 1, reversed = 0;
    cout << "Enter Number: ";
    cin >> n;

    temp = n;

    while(abs(temp) > 9){
        zeros *= 10;
        temp /= 10;
    }

    temp = n;

    while(abs(temp) > 0){
        reversed += (temp%10) * zeros;
        zeros /= 10;
        temp /= 10;
    }

    if(reversed == n){
        cout << n << endl;
    }else{
        cout << n + reversed << endl;
    }

    return 0;
}
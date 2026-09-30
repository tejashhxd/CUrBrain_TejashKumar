#include <iostream>
using namespace std;

int main(){
    int n, temp = 0, product = 1, sum = 0;
    cout << "Enter Number: ";
    cin >> n;

    if(n <= 0){
        cout << "invalid number" << endl;
        return 0;
    }

    temp = n;

    while(abs(temp) > 0){
        sum += temp%10;
        product *= temp%10;
        temp /= 10;
    }

    cout << product - sum << endl;
    return 0;
}
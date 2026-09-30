#include <iostream>
using namespace std;

int main(){
    int n, temp = 0, zeros = 1;
    cout << "Enter Number: ";
    cin >> n;

    temp = n;

    while(abs(temp) > 9){
        zeros *= 10;
        temp /= 10;
    }

    temp = 0;

    while(abs(n) > 0){
        temp += (n%10) * zeros;
        zeros /= 10;
        n /= 10;
    }

    cout << temp*2 << endl;
    return 0;
}
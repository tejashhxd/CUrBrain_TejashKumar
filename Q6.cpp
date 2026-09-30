#include <iostream>
using namespace std;

int main(){
    int n, temp = 0, a, b, aCount = 0, bCount = 0;
    cout << "Enter Number: ";
    cin >> n;
    if(n < 0){
        cout << "number can't be negative" << endl;
        return 0;
    }
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    if(a < 0 || a > 9 || b < 0 || b > 9){
        cout << "invalid number" << endl;
        return 0;
    }

    if(n == 0){
        if(a == 0){
            aCount++;
        }

        if(b == 0){
            bCount++;
        }
    }

    temp = n;



    while(abs(temp) > 0){
        if(temp%10 == a){
            aCount++;
        }else if(temp%10 == b){
            bCount++;
        }
        temp /= 10;
    }

    cout << abs(aCount - bCount) << endl;
    return 0;
}
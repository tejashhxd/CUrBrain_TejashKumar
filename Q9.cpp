#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){
    if(num == 1) return false;

    for(int i = 2; i<=sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n; 
    cout << "Enter N: ";
    cin >> n;

    while(true){
        n++;
        if(isPrime(n)){
            cout << n << endl;
            break;
        }
    }

    return 0;
}
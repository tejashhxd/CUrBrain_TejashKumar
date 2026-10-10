#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void removeMultiples(vector<bool>& isPrime, int n, int num){
    for(int i = num*2; i<=n; i += num){
        isPrime[i] = false;
    }
}

bool checkPrime(int num){
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
    cout << "Enter n: ";
    cin >> n;
    vector<bool> isPrime(n, true);

    for(int i = 2; i<n; i++){
        if(isPrime[i] == false){
            continue;
        }

        if(checkPrime(i)){
            removeMultiples(isPrime, n, i);
        }
    }

    int count = 0;

    for(int i = 2; i<n; i++){
        if(isPrime[i]){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
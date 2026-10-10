#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int num, k; 
    cout << "Enter number: ";
    cin >> num;

    cout << "Enter K: ";
    cin >> k;

    vector<int> factors;

    if(k == 1){
        cout << "1st factor is 1" << endl;
        return 0;
    }

    for(int i = 1; i<=sqrt(num); i++){
        if(num%i == 0){
            if(i != num/i){
                factors.push_back(num/i);
            }
            factors.push_back(i);
        }
    }

    sort(factors.begin(), factors.end());

    if(factors.size() < k){
        cout <<  "-1" << endl;
        return 0;
    }

    cout << factors[k-1];

    return 0;
}
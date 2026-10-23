#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, mod;
    long long val, prefix = 0;

    cout << "Enter number of terms: ";
    cin >> n;

    vector<long long> arr;

    for(int i = 0; i<n; i++){
        cout << "Enter number of terms: ";
        cin >> val;
        arr.push_back(val);
    }

    cout << "Enter modulo value: ";
    cin >> mod;

    for(int i = 0; i<n; i++){
        prefix += arr[i];

        if(prefix % mod == 0){
            cout << "True" << endl;
            return 0;
        }
    }

    cout << "False" << endl;

    return 0;
}

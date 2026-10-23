
#include <iostream>
using namespace std;

int main(){
    long long result = 0, val, mod = 1000000007;
    int n;

    cout << "Enter number of terms in array: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        cout << "Enter value: ";
        cin >> val;
        result = (result + val) % mod;
    }

    cout << "result: " << result << endl;

    return 0;
}

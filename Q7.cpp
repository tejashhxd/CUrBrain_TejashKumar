#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int n, num;
    cout << "Enter number of terms in list: ";
    cin >> n;
    vector<int> arr;

    for(int i = 0; i<n; i++){
        cout << "Enter Number: " ;
        cin >> num;
        arr.push_back(num);
    }

    int ans = gcd(arr[0], arr[n-1]);

    for(int i = 1; i<n-1; i++){
        ans = gcd(ans, arr[i]);
    }

    cout << "GCD: " << ans << endl;
    
    return 0;
}
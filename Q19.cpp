#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr;
    int n, k;
    cout << "enter number of terms in arry: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        int val;
        cout << "enteer value: ";
        cin >> val;
        arr.push_back(val);
    }

    cout << "Enter k: ";
    cin >> k;

    if(k > n){
        k = k%n;
    }

    sort(arr.rbegin(), arr.rend());

    sort(arr.begin(), arr.end()-(n-k));
    sort(arr.begin()+k, arr.end());

    for(int i : arr){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
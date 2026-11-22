#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int n, sum = 0;
    cout << "enter number of terms in arry: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        int val;
        cout << "enteer value: ";
        cin >> val;
        sum += val;
        arr.push_back(val);
    }

    for(int i = 0; i<n; i++){
        arr[i] = sum - arr[i];
        sum = arr[i];
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}
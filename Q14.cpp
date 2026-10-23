#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, val, thershold;
    vector<int> original, ans;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Enter thershold value: ";
    cin >> thershold;

    for(int i = 0; i<n; i++){
        cout << "Enter value to insert: ";
        cin >> val;

        original.push_back(val);
    }

    for(int i = 0; i<n; i++){
        if(original[i] >= thershold){
            ans.push_back(original[i]);
        }
    }

    cout << "[";

    for(int i : ans){
        cout << i << " ";
    }

    cout << ']';

    return 0;
}

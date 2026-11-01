#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int> sales;
    int n, val, ans = INT32_MIN;
    unordered_map<int, int> um;
    cout << "enter number of terms: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        cout << "enter value: ";
        cin >> val;
        sales.push_back(val);
        um[val]++;
    }

    val = INT32_MAX;

    for(auto i : um){
        if(i.second >= ans){
            ans = i.second;
            val = min(i.first, val);
        }
    }

    cout << "Answer: " << val << endl;

    return 0;
}
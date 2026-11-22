#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int n, target, p;
    cout << "enter number of terms in arry: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        int val;
        cout << "enteer value: ";
        cin >> val;
        arr.push_back(val);
    }

    cout << "Enter target ";
    cin >> target;

    bool found = false;
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            found = true;
            p = i;
            break;
        }
    }

    if(!found){
        for(int i = 0; i<n; i++){
            cout << arr[i] << " ";
        }cout << endl;
        return 0;
    }

    for(int i = p; i<n-1; i++){
        arr[i] = arr[i+1];
    }

    for(int i = 0; i<n-1; i++){
            cout << arr[i] << " ";
    }cout << endl;
    
    return 0;

}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, val, first = 0, second = 0;
    vector<int> arr;
    bool hasFirst = false, hasSecond = false;

    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        cout << "Enter value to insert: ";
        cin >> val;
        arr.push_back(val);
    }

    for(int i = 0; i<n; i++){
        if(!hasFirst || arr[i] > first){
            if(hasFirst){
                second = first;
                hasSecond = true;
            }

            first = arr[i];
            hasFirst = true;
        }else if(arr[i] < first && (!hasSecond || arr[i] > second)){
            second = arr[i];
            hasSecond = true;
        }
    }

    if(hasSecond){
        cout << second << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}

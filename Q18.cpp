#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, start, end, val;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr;
    
    for (int i = 0; i < n; i++) {
        cout << "Enter array elements: ";
        cin >> val;
        arr.push_back(val);
    }

    cout << "Enter start index: ";
    cin >> start;

    cout << "Enter end index: ";
    cin >> end;

    if (start < 0 || end >= n || start > end) {
        cout << "Invalid indices!";
        return 1;
    }

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

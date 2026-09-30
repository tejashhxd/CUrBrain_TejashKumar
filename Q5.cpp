#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<int> ans;
    cout << "Enter Number: ";
    cin >> n;

    if(n < 0){
        cout << "Number can't be negative" << endl;
        return 0;
    }

    while(abs(n) > 0){
        ans.push_back( ((n%10)%2 == 0) ? 0 : (n%10) );
        n /= 10;
    }


    for(int i = 0; i<ans.size()/2; i++){
        swap(ans[i], ans[ans.size()-1-i]);
    }

    for(int i : ans){
        cout << i << " ";
    }

    return 0;
}
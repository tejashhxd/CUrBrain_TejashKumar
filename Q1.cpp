#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cout << "Enter Number: ";
    cin >> n;

    

    while(n > 0){
        n = n/10;
        count++;
    }

    if(count == 0){
        cout << "false" << endl;
        return 0;
    }

    if(count%2 == 0){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

    return 0;
}
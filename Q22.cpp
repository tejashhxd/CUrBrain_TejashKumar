#include <iostream>
#include <vector>
using namespace std;

void MergeSort(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int p = m, j = 0, i = 0;

    while(i < m && j < n){
        if(nums1[i] > nums2[j]){
            nums1[p++] = nums1[i];
            nums1[i] = nums2[j]; 
            j++;
        }
        i++;
    }

    while(j < n){
        nums1[p++] = nums2[j++];
    }

}

int main(){
    vector<int> nums1 = {4,5,6,0,0,0};
    vector<int> nums2 = {1,2,3};
    MergeSort(nums1, 3, nums2, 3);

    for(int i : nums1){
        cout << i << " ";
    } cout << endl;

    return 0;
}
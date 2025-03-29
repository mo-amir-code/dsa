#include<iostream>
#include<vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    int n = n1 + n2 - 1;
    int el1;
    int el2;
    int idx1 = n/2;
    int idx2 = idx1 + 1;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(nums1[i] <= nums2[j]){
            if(i+j == idx1) el1 = nums1[i];
            if(i+j == idx2) el2 = nums1[i];
            i++;
        }else{
            if(i+j == idx1) el1 = nums2[j];
            if(i+j == idx2) el2 = nums2[j];
            j++;
        }
    }

    while(i < n1){
        if(i+j == idx1) el1 = nums1[i];
        if(i+j == idx2) el2 = nums1[i];
        i++;
    }

    while(j < n2){
        if(i+j == idx1) el1 = nums2[j];
        if(i+j == idx2) el2 = nums2[j];
        j++;
    }

    cout<<"Idx1: "<<idx1<<" El1: "<<el1<<endl;
    cout<<"Idx2: "<<idx2<<" El2: "<<el2<<endl;

    if(n%2 == 0){
        return el1;
    }

    return double((double)(el1+el2)/2.0);
}

int main(){
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    double ans = findMedianSortedArrays(nums1, nums2);
    cout<<"Answer is: "<<ans<<endl;

    return 0;
}
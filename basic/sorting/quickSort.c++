#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int findPivot(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j)
    {
        while(arr[i] <= pivot && i < high) i++;
        while(arr[j] > pivot && j > low) j--;
        if(i < j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j; 
}

void qs(vector<int>& arr, int low, int high){
    if(low < high){
        int pIndx = findPivot(arr, low, high);
        qs(arr, low, pIndx - 1);
        qs(arr, pIndx + 1, high);
    }
}

int main(){
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    qs(arr, 0, arr.size()-1);
    
    cout << "Array After Quick Sort: " << endl;

    for(int n : arr){
        cout << n << "\t";
    }

    return 0;
}
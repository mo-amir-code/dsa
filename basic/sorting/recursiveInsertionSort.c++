#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr, int i){
    if(i == arr.size()) return;

    int j = i;

    while(j > 0 && arr[j] < arr[j-1]){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }

    insertionSort(arr, i+1);
}

int main()
{
    vector<int> A = {6, 3, 8, 16, 45, 36, 27};
    int n = A.size();

    insertionSort(A, 0);

    cout << "After Recursive Insertion Sort: \n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }

    return 0;
}
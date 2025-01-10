#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int i)
{
    if(i == 0) return;

    for(int j = 0; j < i; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }

    bubbleSort(arr, i - 1);
}

int main()
{
    vector<int> A = {6, 3, 8, 16, 45, 36, 27};
    int n = A.size();

    bubbleSort(A, n - 1);

    cout<<"After Recursive Bubble Sort: \n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }

    return 0;
}
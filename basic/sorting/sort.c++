#include <iostream>
using namespace std;

void selectionSort()
{
    int A[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i <= n - 1; i++)
    {
        int m = i;
        for (int j = m + 1; j <= n - 1; j++)
        {
            if (A[m] > A[j])
                m = j;
        }
        int temp = A[i];
        A[i] = A[m];
        A[m] = temp;
    }

    cout<<"After Selection Sort: "<<endl;

    for (int i = 0; i <= n - 1; i++)
        cout << A[i] << "\t";
}

void bubbleSort()
{
    int A[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i <= n - 1; i++)
    {
        int didSwap = 0;
        for(int j = 1; j <= n - 1 - i; j++){
            if(A[j-1] > A[j]){
                int temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
                didSwap = 1;
            }
        }

        if(didSwap == 0) break;
    }

    cout<< "\nAfter Bubble Sort: " << endl;

    for (int i = 0; i <= n - 1; i++)
        cout << A[i] << "\t";
}

void insertionSort()
{
    int A[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i <= n - 1; i++)
    {
        for(int j = i; j > 0; j--){
            if(A[j] < A[j-1]){
                int temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
            }else break;
        }
    }

    cout<< "\nAfter Insertion Sort: " << endl;

    for (int i = 0; i <= n - 1; i++)
        cout << A[i] << "\t";
}

int main()
{

    selectionSort();
    bubbleSort();
    insertionSort();

    return 0;
}
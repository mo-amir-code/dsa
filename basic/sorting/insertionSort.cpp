#include<iostream>
using namespace std;

int main(){
    int A[] = {13, 11, 12, 5, 6};
    int n = 5;

    for(int i = 0; i <= n - 1; i++){
        int j = i;
        while(j > 0 && A[j-1] > A[j]){
            int t = A[j-1];
            A[j-1] = A[j];
            A[j] = t;
            j--;
        }
    }

    for(int i = 0; i <= n - 1; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
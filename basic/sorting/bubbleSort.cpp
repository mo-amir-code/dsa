#include<iostream>
using namespace std;

int main(){
    int A[] = {13, 11, 12, 5, 6};
    int n = 5;

    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j <= i-1; j++){
            if(A[j] > A[j+1]){
                int t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }

    for(int i = 0; i <= n - 1; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
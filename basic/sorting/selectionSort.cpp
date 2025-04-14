#include<iostream>
using namespace std;

int main(){
    int A[] = {13, 11, 12, 5, 6};
    int n = 5;

    for(int i = 0; i <= n - 1; i++){
        for(int j = i+1; j <= n - 1; j++){
            if(A[i] > A[j]){
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }

    for(int i = 0; i <= n - 1; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
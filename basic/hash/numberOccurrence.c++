#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[100] = {0};
    for(int i = 0; i < n; i++){
        int input;
        cin>>input;
        A[input]++;
    }


    int q;
    cin>>q;
    while(q-- > 0){
        int input;
        cin>>input;
        if(A[input] > 0)
        cout<<input<<"-->"<< A[input] << endl;
    }

    return 0;
}
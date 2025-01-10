#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int pN = n;
            if(j <= i) pN -= j;
            else pN -= i;
            cout<<pN;
        }

        for(int j = n-2; j >=0; j--){
            int pN = n;
            if(j <= i) pN -= j;
            else pN -= i;
            cout <<pN;
        }
        cout<<endl;
    }

    for(int i = n-2; i >= 0; i--){
        for(int j = 0; j < n; j++){
            int pN = n;
            if(j <= i) pN -= j;
            else pN -= i;
            cout<<pN;
        }

        for(int j = n-2; j >=0; j--){
            int pN = n;
            if(j <= i) pN -= j;
            else pN -= i;
            cout <<pN;
        }
        cout<<endl;
    }

    return 0;
}
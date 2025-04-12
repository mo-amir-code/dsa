#include<iostream>
#include<string>
using namespace std;


int main(){
    string str = "abc";
    getline(cin, str);

    int n = str.size();

    cout<<n*(n+1)/2;


    return 0;
}
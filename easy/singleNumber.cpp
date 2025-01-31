#include<iostream>
using namespace std;

int main(){
    int res = 0;
    res ^= 10;
    cout<< "Res = " << res << endl;
    res ^= 20;
    cout<< "Res = " << res << endl;
    res ^= 10;
    cout<< "Res = " << res << endl;
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    double power(double x, int n){
        if(n == 1){
            return (x);
        }
        return (x*power(x, n-1));
    }
    double myPow(double x, int n) {
        if(n == 0) return 1;
        if(n < 0){
            return 1/power(x, abs(n));
        }
        return power(x, n);
    }
};

int main(){
    Solution sol;
    
    double ans = sol.myPow(2.0, -200000000);

    cout<<"Answer: "<<ans<<endl;

    return 0;
}
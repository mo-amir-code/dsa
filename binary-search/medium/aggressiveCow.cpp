#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<chrono>
using namespace std;

long long getCurrentTimeInMilliseconds() {
    auto now = chrono::system_clock::now(); // Current time point
    auto duration = now.time_since_epoch(); // Duration since epoch
    return chrono::duration_cast<chrono::milliseconds>(duration).count(); // Convert to ms
}

int findMinMax(vector<int>& stalls, bool isMin){
    int ans = isMin ? stalls[0] : stalls[stalls.size() - 1];
    return ans;
}

bool isPossible(vector<int>& stalls, int c, int d){
    int lastPlacedCow = stalls[0];
    c--;

    for(int i = 1; i < stalls.size(); i++){
        if(stalls[i]-lastPlacedCow >= d){
            lastPlacedCow = stalls[i];
            c--;
        }
    }

    return c > 0 ? false : true;
}

int bruteForce(vector<int>& stalls, int c){
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int high = findMinMax(stalls, false);

    int minMaxDistance = INT_MIN;

    long long cTime = getCurrentTimeInMilliseconds();

    for(int i = 1; i <= high; i++){
        if(isPossible(stalls, c, i)){
            minMaxDistance = max(minMaxDistance, i);
        }else{
            break;
        }
    }

    long long lTime = getCurrentTimeInMilliseconds();

    cout<<"\nTime Taken by Brute force is: "<< lTime - cTime;

    return minMaxDistance;
}

int optimal(vector<int>& stalls, int c){
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 1;
    int high = findMinMax(stalls, false);

    int minMaxDistance = INT_MIN;

    long long cTime = getCurrentTimeInMilliseconds();

    while(low <= high){
        int mid = low + (high - low)/2;
        if(isPossible(stalls, c, mid)){
            minMaxDistance = max(mid, minMaxDistance);
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    long long lTime = getCurrentTimeInMilliseconds();
    cout<<"\nTime Taken by Optimal Approach is: "<< lTime - cTime;

    return minMaxDistance;
}


int main(){
    int n, c;
    cout<<"Enter the number of stalls: ";
    cin>>n;
    cout<<"Enter the number of cows: ";
    cin>>c;
    vector<int> stalls(n);
    cout<<"Enter the positions of stalls: ";
    for(int i=0; i<n; i++){
        cin>>stalls[i];
    }
    sort(stalls.begin(), stalls.end());

    cout<<"\n\nPress 1 for Brute Force:\nPress 2 for Optimal:\n";
    int choice;
    cin>>choice;

    int minDistance;

    switch(choice){
        case 1:
            minDistance = bruteForce(stalls, c);
            break;
        case 2:
            minDistance = optimal(stalls, c);
            break;
        default:
            cout<<"Invalid choice!";
    }

    if(choice == 1 || choice == 2){
        cout<<"\n\n";
        cout<<"Min Max Distance is : " << minDistance;
    }
    
    return 0;
}

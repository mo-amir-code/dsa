#include<iostream>
#include<vector>
using namespace std;

int countAnagram(string s, vector<string>& arr){
    int count = 0;

    vector<int> atoz(26, 0);
    for(int i = 0; i < s.size(); i++){
        int asciiVal = s[i] - 97;
        atoz[asciiVal]++;
    }

    for(string str : arr){
        vector<int> az(atoz);
        bool isAnagram = true;
        for(int i = 0; i < str.size(); i++){
            int asciiVal = str[i] - 97;
            if(--az[asciiVal] < 0){
                isAnagram = false;
                break;
            }
        }
        if(isAnagram) count++;
    }

    cout<<s<<" : "<<count<<endl;

    return count;
} 

void checkAnagrams(vector<string>& arr1, vector<string>& arr2, vector<int>& countAnagrams){
    for(int i = 0; i < arr1.size(); i++){
        countAnagrams[i] = countAnagram(arr1[i], arr2);
    }
}

int main(){
    vector<string> arr1;
    vector<string> arr2;

    int n, m;
    printf("Enter size of array 1 strings: ");
    cin>>m;
    printf("Enter size of array 2 strings: ");
    cin>>n;

    vector<int> anagramsCount(m, 0);

    for(int i = 0; i < m; i++){
        printf("Enter a string: ");
        string s;
        cin>>s;
        arr1.push_back(s);
    }

    cout<<"\n"<<"Enter array 2 strings: "<<endl;

    for(int i = 0; i < n; i++){
        printf("Enter a string: ");
        string s;
        cin>>s;
        arr2.push_back(s);
    }

    checkAnagrams(arr1, arr2, anagramsCount);

    cout<<"\n"<<endl;

    for(int i = 0; i < m; i++){
        cout<<arr1[i]<<" count is: "<<anagramsCount[i]<<endl;
    }

    return 0;
}
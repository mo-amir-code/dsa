#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char c = 65;
    // Pattern 1
    for (int i = 0; i < n; i++)
    {
        c = 65;
        for (int j = 0; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
    cout << "\nPattern 2:" << endl;
    // Pattern 2
    c = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c;
        }
        c++;
        cout << endl;
    }
    cout << "\nPattern 3: " << endl;
    // Pattern 3
    c = 65 + n;
    for (int i = 0; i < n; i++)
    {
        c -= i + 1;
        for (int j = 0; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
    return 0;
}
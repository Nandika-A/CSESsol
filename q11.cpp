#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        // 2m+n = a and 2n+m = b
        // m = 1/3 . 2a-b, n = 1/3 (2b-a)
        int m = 2*a - b;
        int n = 2*b - a;
        if(m % 3 == 0 && n % 3 == 0 && m >= 0 && n >= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
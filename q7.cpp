#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int k, a, b, c;
    cin >> k;
    for(long long int n = 1; n <= k; n++)
    {
        c = n*n;
        a = (c*(c-1))/2;
        b = 4 * (n-1) * (n-2);
        cout << a-b << endl;
    }
    return 0;
}
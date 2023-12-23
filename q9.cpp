#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n, mod = 1000000007;
    cin >> n;
    long long int ans = 1;
    while(n--)
    {
        ans = ((ans % mod) * 2) % mod;
    }
    cout << ans << endl;
    return 0;
}
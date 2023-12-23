#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n, i = 1;
    cin >> n;
    long int ans = 0;
    while(n >= pow(5, i))
    {
        ans += n/pow(5, i);
        i++;
    }
    cout << ans << endl;
    return 0;
}
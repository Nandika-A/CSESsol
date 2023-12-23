#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int m = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i-1])
        {
            m += (a[i-1]-a[i]);
            a[i] = a[i-1];
        }
    }
    cout << m << endl;
    return 0;
}
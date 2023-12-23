#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long int n;
    cin >> n;
    long long int sum = 0, s = 0;
    int k;
    for(int i = 0; i < n-1; i++)
    {
        cin >> k;
        sum += k;
    }
    s = (n*(n+1))/2;
    cout << s-sum << endl;
    return 0;
}
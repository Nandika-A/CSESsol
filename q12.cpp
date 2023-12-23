#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> m;
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    int i = 0, f = 0;
    for(auto it: m)
    {
        if(it.second % 2 && !f)
        {
            s[n/2] = it.first;
            f=1;
            it.second--;
        }
        else if(it.second % 2){
            cout << "NO SOLUTION" << endl;
            return 0;
        }
        while(it.second > 0){
            s[i] = it.first;
            s[n-i-1] = it.first;
            it.second -= 2;
            i++;
        }
    }
    cout << s << endl;
    return 0;
}
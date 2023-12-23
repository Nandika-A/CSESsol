#include<bits/stdc++.h>
using namespace std;

int main(void){
    string dna;
    cin >> dna;
    int n = dna.length();
    int i = 0, j = 1, l = 1, ans = 1;
    while(j < n)
    {
        if(dna[i] == dna[j])
        {
            l++;
        }
        else{
            i = j;
            l = 1;
        }
        j++;
        ans = max(ans, l);
    }
    cout << ans << endl;
    return 0;
}
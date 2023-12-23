#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int r, c, t;
    cin >> t;
    while(t--){
        cin >> r >> c;
        long long int x;
        if(r == 1 && c == 1)
        {
            cout << 1 << endl;
        }
        else if(r == 1)
        {
            if(c&1)
            {
                cout << c*c << endl;
            }
            else{
                cout << (c-1)*(c-1) + 1 << endl;
            }
        }
        else if(c == 1)
        {
            if(r&1)
            {
                cout << (r-1)*(r-1) + 1 << endl;
            }
            else{
                cout << r*r << endl;
            }
        }
        else{
            if(r > c)
            {
                if(r&1)
                {
                    x = (r-1)*(r-1) + 1;
                    while(c > 1)
                    {
                        x++;
                        c--;
                    }
                }
                else{
                    x = r*r;
                    while(c > 1)
                    {
                        x--;
                        c--;
                    }
                }
            }
            else{
                if(c&1)
                {
                    x = c*c;
                    while(r > 1)
                    {
                        x--;
                        r--;
                    }
                }
                else{
                    x = (c-1)*(c-1) + 1;
                    while(r > 1)
                    {
                        x++;
                        r--;
                    }
                }
            }
            cout << x << endl;
        }
    }
    return 0;
}
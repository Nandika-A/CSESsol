#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    deque<int> q;
    if(n == 1)
    {
        cout << 1 << endl;
    }
    else if(n <= 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        q.push_back(3);
        q.push_back(1);
        q.push_back(4);
        q.push_back(2);
        for(int i = 5; i <= n; i++)
        {
            if(i&1)
            {
                q.push_back(i);
            }
            else{
                q.push_front(i);
            }
        }
        while(!q.empty())
        {
            cout << q.front() << " ";
            q.pop_front();
        }
    }
    return 0;
}
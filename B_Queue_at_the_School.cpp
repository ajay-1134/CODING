#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    vector<string> ss;
    int time_limit = 50;
    while (time_limit--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
            
        }
        ss.push_back(s);
    }

    cout << ss[t - 1];
}
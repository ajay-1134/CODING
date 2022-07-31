#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int odd_0 = 0, even_0 = 0, odd_1 = 0, even_1 = 0;
        int zeroes = 0, ones = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && s[i] == '0'){
                even_0++;
                zeroes++;
            }
                
            else if (i % 2 != 0 && s[i] == '0'){
                odd_0++;
                zeroes++;
            }
                
            else if (i % 2 == 0 && s[i] == '1'){
                even_1++;
                ones++;
            }
                
            else if (i % 2 != 0 && s[i] == '1'){
                odd_1++;
                ones++;
            }
                
        }
        int ans = 0;
        vector<int> v;
        int temp = min(even_0, odd_1);
        while (temp--)
        {
            v.push_back(0);
            even_0--;
            v.push_back(1);
            odd_1--;
        }
        if (even_0 > odd_1)
        {
            v.push_back(0);
            even_0--;
            if (odd_0 > 0)
            {
                v.push_back(0);
                odd_0--;
            }
        }
        // else if (odd_1 > even_0)
        // {
        //     if (even_1 > 0)
        //     {
        //         v.push_back(1);
        //         even_1--;
        //         v.push_back(1);
        //         odd_1--;
        //     }
        // }
        temp = min(even_1, odd_0);
        while (temp--)
        {
            v.push_back(1);
            even_1--;
            v.push_back(0);
            odd_0--;
        }
        int rem_odds = odd_0 + odd_1, rem_evens = even_0 + even_1;
        int rem = rem_odds;

        while (rem--)
        {
            if (even_0 > 0)
            {
                v.push_back(0);
                even_0--;
            }
            else if (even_1 > 0)
            {
                v.push_back(1);
            }
            if (odd_0 > 0)
            {
                v.push_back(0);
                odd_0--;
            }
            else if (odd_1 > 0){
                v.push_back(1);
                odd_1--;
            }
        }
        if(n%2!=0){
            if (even_0 > 0)
            {
                v.push_back(0);
                even_0--;
            }
            else if (even_1 > 0)
            {
                v.push_back(1);
                even_1--;
            }
        }

        // for(int i=0; i<n; i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;

        for(int i=0; i<n-1; i++){
            if(v[i] == 0 && v[i+1] == 1){
                ans++;
                i++;
            }
        }
        cout<<ans<<endl;

    }
}
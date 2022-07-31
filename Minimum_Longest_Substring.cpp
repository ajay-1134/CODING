//UNSOLVED

#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1 = "", s2 = "";
        int zeroes = 0, ones = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '0') zeroes++;
            else ones++;
        }
        int z2 = zeroes, o2 = ones;
        int count = 1;
        while(zeroes && ones){
            int cnt1 = count, cnt2 = count;
            while(cnt1>0 && zeroes>0){
                s1 += '0';
                cnt1--;
                zeroes--;
            }
            while(cnt2 > 0 && ones> 0){
                s1 += '1';
                cnt2--;
                ones--;
            }
            count++;
        }
        while(zeroes--){
            s1+='0';
        }
        while(ones--){
            s1+='1';
        }
        cout<<s1<<endl;

        while(z2 > 0 && o2 > 0){
            s2+='1';
            s2+='0';
            z2--;
            o2--;
        }
        while(z2--){
            s2+='0';
        }
        while(o2--){
            s2+='1';
        }
        cout<<s2<<endl;
        
    }
}
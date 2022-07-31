#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    int var = 1;
    while(var<=t){
        string s;
        cin>>s;
        int n = s.length();
        int arr[26]={0};
        int ans = 0;
        int vowels=0, constants = 0;
        for(int i=0; i<n; i++){
            arr[s[i]-'A']++;
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') vowels++;
            else constants++;
        }
        int vowmx = 0,conmx=0;
        int ch;
        for(int i=0; i<26; i++){
            if(i == 0 || i == 'E'-'A' || i == 'I'-'A' || i == 'O'-'A' || i == 'U'- 'A')
            vowmx = max(vowmx,arr[i]);
            else conmx = max(conmx,arr[i]);
        }
        cout<<"Case #"<<var<<": ";
        cout<<min( (constants + 2 * (vowels - vowmx) ), vowels + 2 * (constants - conmx) ) <<endl;
        var++;
    }
    return 0; 
}
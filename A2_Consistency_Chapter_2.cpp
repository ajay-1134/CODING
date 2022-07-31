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
        int k;
        cin>>k;
        char str1[k],str2[k];
        for(int i=0; i<k; i++){
            cin>>str1[i]>>str2[i];
        }
        int arr[26];
        for(int i=0; i<n; i++){
            arr[s[i]-'A']++;
        }
        int flag = 0, ans[26] = {0};
        
        int mat[26][26] = {0};
        for(int i=0; i<26; i++){
            for(int j=0; j<k; j++){
                if(str2[j] == 'A'+i){
                    mat['A' + i][str1[j]]++;
                }
            }
        }



        cout<<"Case #"<<var<<": ";
        var++;
    }
    return 0; 
}
#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int n,m;
    cin>>n>>m;
    string marks[n];
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        int flag = 0;
        for(int j=0; j<m; j++){
            int flag1 = 0;
            int temp = marks[i][j];
            for(int k=0; k<n; k++){
                if(marks[k][j]> temp && k!=i){
                    flag1 = 1;
                    break;
                }
            }
            if(flag1 == 0){
                flag = 1;
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    
}
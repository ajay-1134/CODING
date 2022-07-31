#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<pair<int,int>>arr;
    for(int i=0; i<n; i++){
        int v1,v2;
        cin>>v1>>v2;
        arr.push_back({v1,v2});
    }
    // cout<<s<<endl;
    int x = arr[0].first;
    int y = arr[0].second;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<"  ";
    // }
    // cout<<endl;
    for(int i=0; i<m; i++){
        if(s[i] == 'A'){
            int temp = 0;
            for(int i=1; i<arr.size(); i++){
                if(arr[i].first-x == arr[i].second-y){
                    x = arr[i].first;
                    y = arr[i].second;
                    temp = 1;
                    arr.erase(arr.begin() + i);
                }
            }
            if(temp == 0) break;
        }
        else if(s[i] == 'B'){
            int temp = 0;
            for(int i=1; i<arr.size(); i++){
                if(arr[i].first-x == y - arr[i].second){
                    x = arr[i].first;
                    y = arr[i].second;
                    temp = 1;
                    arr.erase(arr.begin() + i);
                }
            }
            if(temp == 0) break;
        }
        else if(s[i] == 'C'){
            int temp = 0;
            for(int i=1; i<arr.size(); i++){
                if(x - arr[i].first == arr[i].second-y){
                    x = arr[i].first;
                    y = arr[i].second;
                    temp = 1;
                    arr.erase(arr.begin() + i);
                }
            }
            if(temp == 0) break;
        }
        else{
            int temp = 0;
            for(int i=1; i<arr.size(); i++){
                if(x - arr[i].first == y - arr[i].second){
                    x = arr[i].first;
                    y = arr[i].second;
                    temp = 1;
                    arr.erase(arr.begin() + i);
                }
            }
            if(temp == 0) break;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
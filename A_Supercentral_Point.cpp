#include<bits/stdc++.h>
using namespace std;
#define int long long int

int supercentral_points(vector<pair<int,int>>arr){
    int ans = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        int temp = 0;
        for(int j=0; j<n; j++){
            if(arr[j].first > arr[i].first && arr[j].second == arr[i].second){
                temp++;
                break;
            }
        }
        for(int j=0; j<n; j++){
            if(arr[j].first < arr[i].first && arr[j].second == arr[i].second){
                temp++;
                break;
            }
        }
        for(int j=0; j<n; j++){
            if(arr[j].first == arr[i].first && arr[j].second > arr[i].second){
                temp++;
                break;
            }
        }
        for(int j=0; j<n; j++){
            if(arr[j].first == arr[i].first && arr[j].second < arr[i].second){
                temp++;
                break;
            }
        }
        if(temp == 4){ 
            ans++;
        }
    }
    return ans;
}

signed main(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr;
    for(int i=0; i<n; i++){
        int val1,val2;
        cin>>val1>>val2;
        arr.push_back({val1,val2});
    }
    cout<<supercentral_points(arr)<<endl;
    return 0;
}
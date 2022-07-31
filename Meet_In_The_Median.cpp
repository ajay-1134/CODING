#include<bits/stdc++.h>
using namespace std;
#define int long long int

int med(int k, int arr[]){
    sort(arr,arr+k);
    return arr[(k-1)/2];
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans[k];
        int mx = 0;
        int arr1[n];
        for(int i=0; i<n; i++){
            arr1[i] = arr[i];
        }
        int ind = 0;
        sort(arr, arr + n, greater<int>());
        int a[k];
        int index = 0;
        for(int i=k-1; i>=0; i--){
            a[index] = arr[i];
            index++;
        }

        for(int i=0; i<n; i++){
            int start = 0,end = k-1;
            while(start <= end){
                int mid = start + (end - start)/2;
                if(a[mid] == arr1[i]){
                    ans[ind] = arr1[i];
                    ind++;
                    break;
                }
                else if(a[mid] < arr1[i]) start = mid + 1;
                else end = mid-1;
            }
        }

        // for(int i=0; i<k; i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;

        int ans1[k];
        for(int i=0; i<k; i++){
            ans1[i] = ans[i];
        }
        cout<<med(k,ans)<<endl;
        for(int i=0; i<k; i++){
            cout<<ans1[i]<<" ";
        }
        cout<<endl;
    }
}
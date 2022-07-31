#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int n, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i] == 0) return false;
    }
    return true;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,t;
        cin>>n>>t;
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum == 0) cout<<sum<<endl;
        else{
            while(t>0 && check(n,arr) == false){
                int arr1[n];
                for(int i=0; i<n; i++){
                    arr1[i] = arr[i];
                }
                for(int i=0; i<n; i++){
                    if(i==0 && arr1[i] > 0){ 
                        arr[n-1]++;
                        arr[1]++;
                        sum+=2;
                    }
                    else if(i == n-1 && arr1[i] > 0){
                        arr[n-2]++;
                        arr[0]++;
                        sum+=2;
                    }
                    else{ 
                        if(arr1[i] > 0){
                            arr[i-1]++;
                            arr[i+1]++;
                            sum+=2;
                        }
                    }
                }
                t--;
            }
            if(t > 0)
            sum += (t * 2 * n);
            cout<<sum<<endl;
        }
        
    }
    return 0;
}
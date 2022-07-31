#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    int sum = 0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int police=0,crime=0;
    for(int i=0; i<n; i++){
        if(police > 0){
            if(arr[i] == -1){
                police--;
            }
            else police+=arr[i];
        }
        else{
            if(arr[i] == -1){
                crime++;
            }
            else police+=arr[i];
        }
    }
    cout<<crime<<endl;
    return 0;
}
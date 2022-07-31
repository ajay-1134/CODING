#include<bits/stdc++.h>
using namespace std;

int maxPrice(int arr[], int l, int r){
    int ans;
    while(l<=r){
        int m = l + (r-l)/2;
        if(arr[m] > arr[m-1] && arr[m] > arr[m+1]){
            ans = arr[m];
            break;
        }
        else if(arr[m] > arr[m-1] && arr[m] < arr[m+1]){
            l = m+1;
        }
        else r = m-1;
    }
    return ans;
}

int main(){
    int arr[] = {30,40,60,97,59,58,57,56,55,54,53,52,51,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The maximum price in the sale is: "<<maxPrice(arr,0,n-1);
    return 0;
}
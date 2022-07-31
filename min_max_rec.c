#include<stdio.h>

int min(int arr[], int i){
    if(i < 0){
        return arr[i+1];
    }

    if(arr[i] < min(arr, i-1)){
        return arr[i];
    }
    else {
        return min(arr, i-1);
    }

}


int max(int arr[], int i){
    if(i < 0){
        return arr[i+1];
    }

    if(arr[i] > max(arr, i-1)){
        return arr[i];
    }
    else {
        return max(arr, i-1);
    }

}


int main(){
    int arr[] = {1,2,3,4,5,10};
    int sz = sizeof(arr)/sizeof(arr[0]);

    sz--;
    int ans = min(arr, sz) * max(arr, sz);

    printf("%d", ans);
}
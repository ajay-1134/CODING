#include<stdio.h>


int sumDigits(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= 100; i++){
        if(i%10 == 0){
            continue;
        }
        int val = n * i;
        if(sumDigits(val) == sumDigits(n)){
            printf("%d", i);
            break;
        }
    }
    return 0;
}
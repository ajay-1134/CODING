/*
1
22
333
4444
55555
*/


#include<stdio.h>

int main(){
    int n;
    printf("Enter a number n upto which u want to print the pattern: \n");
    scanf("%d",&n);
    int var = 1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%d",var);
        }
        printf("\n");
        var++;
    }
    return 0;
}
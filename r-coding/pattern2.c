/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number upto how many rows u want to print the pattern: \n");
    scanf("%d",&n);
    int var = 1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%d ",var);
            var++;
        }
        printf("\n");
    }
}
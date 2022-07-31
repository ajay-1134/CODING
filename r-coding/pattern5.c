/*

          *
        * * *
      * * * * *
    * * * * * * *


*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows upto which u want to draw the pattern: \n");
    scanf("%d",&n);
    if(n%2==0) n -= 1 ;
    int total_chars = n*2 - 1;
    for(int i=1; i<=n; i+=2){
        int temp = 2 * i - 1;
        int rem_space = (total_chars - temp)/2;
        for(int j=0; j<rem_space; j++){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("* ");
        }
        for(int j=0; j<rem_space-1; j++){
            printf(" ");
        }
        printf("\n");

    }
}
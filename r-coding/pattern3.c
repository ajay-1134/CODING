/*

        1
       2 3
      4 5 6
     7 8 9 10


*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows upto which u want to draw the pattern: \n");
    scanf("%d",&n);
    int var;
    int total_chars = n*2 - 1;
    for(int i=1; i<=n; i++){
        int temp = 2 * i - 1;
        int rem_space = (total_chars - temp)/2;
        for(int j=0; j<rem_space; j++){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("%d ",var);
            var++;
        }
        for(int j=0; j<rem_space-1; j++){
            printf(" ");
        }
        printf("\n");

    }
}
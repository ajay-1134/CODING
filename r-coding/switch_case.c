#include<stdio.h>

int main(){
    int n;
    printf("Enter the month number: \n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            printf("31 days\n");
            break;
    case 2:
            printf("It's feb, it generally have 28 days but during leap year it is 29 days long\n");
            break;
    case 4:
    case 6:
    case 9:
    case 11:
            printf("30 days\n");
            break;
    default: printf("Invalid month number\n");
        break;
    }
}
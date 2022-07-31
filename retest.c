#include<stdio.h>
#include<string.h>

void convert(){
    int val;
    int x;
    scanf("%d%d", &val, &x);
    int i = 0;
    int arr[32];
    for(int j = 0; j < 32; j++) {
        arr[j] = -1;
    }
    while(val){
        int rem = val%x;
        arr[i] = rem;
        i++;
        val = val/x;
    }
    i--;
    for(; i >= 0; i--){
        printf("%d", arr[i]);
    }
    printf("\n");
}


int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}
 

void decimal()
{
    char str[] = "11A";
    int base = 16;
    int len = strlen(str);
    int power = 1; 
    int num = 0;  
    int i;
 
    
    for (i = len - 1; i >= 0; i--)
    {
    
        if (val(str[i]) >= base)
        {
           printf("Invalid Number");
           return ;
        }
 
        num += val(str[i]) * power;
        power = power * base;
    }

    printf("%d\n", num);
 
    return ;
}


void decimal2()
{
    int value;
    int x;
    scanf("%d%d", &value, &x);
    
    int power = 1; 
    int num = 0;  
    
 
    while(value){
        int rem = value%10;
        if(rem >= x){
            printf("Invalid number");
            return;
        }
        num += rem * power;
        power = power * x;
        value = value/10;
    }


    printf("%d\n", num);
 
    return ;
}


int main(){

    convert();
    decimal2();
    return 0;
}
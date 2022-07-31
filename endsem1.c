#include<stdio.h>

int main(){
    int Ajan205;
    scanf("%d",&Ajan205);

    int Ajas205 = 2 * Ajan205 - 1;
 
    for (int Ajai205 = 0; Ajai205 < (Ajas205 / 2) + 1; Ajai205++) {
        
        int Ajam205 = Ajan205;
        for (int Ajaj205 = 0; Ajaj205 < Ajai205; Ajaj205++) {
            printf("%d ", Ajam205);
            Ajam205--;
        }
 
        for (int Ajak205 = 0; Ajak205 < Ajas205 - 2 * Ajai205; Ajak205++) {
            printf("%d ", Ajan205-Ajai205);

        }
 
        Ajam205 = Ajan205 - Ajai205 + 1;
        for (int Ajal205 = 0; Ajal205 < Ajai205; Ajal205++) {
            printf("%d ", Ajam205);
            Ajam205++;
        }

        printf("\n");

    }
 

    for (int Ajai205 = Ajas205 / 2 - 1; Ajai205 >= 0; Ajai205--) {
        int Ajam205 = Ajan205;
        for (int Ajaj205 = 0; Ajaj205 < Ajai205; Ajaj205++) {
            printf("%d ", Ajam205);
            Ajam205--;
        }
 
        for (int Ajak205 = 0; Ajak205 < Ajas205 - 2 * Ajai205; Ajak205++) {
            printf("%d ", Ajan205-Ajai205);

        }
 
        Ajam205 = Ajan205 - Ajai205 + 1;
        for (int Ajal205 = 0; Ajal205 < Ajai205; Ajal205++) {
            printf("%d ", Ajam205);
            Ajam205++;
        }
        printf("\n");
    }

    return 0;
}
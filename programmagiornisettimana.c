#include <stdio.h>

int main(void) {
    int a;
    printf("inserisci un numero corrispondente al giorno della settimana per stamparlo\n");
    scanf("%d", &a);

    switch(a)
    { 
        
        case 1:
        printf("lunedi\n");
        break;

         case 2:
        printf("Martedi\n");
        break;

        case 3:
        printf("Mercoledi\n");
        break;
        case 4:
        printf("Giovedi\n");
        break;
        case 5:
        printf("venerdi\n");
        break;

        case 6:
        printf("sabato\n");
        break;

        case 7:
        printf("domenica\n");
        break;
        default:
         printf("numero non valido \n");
        break;




    }
 
  
}
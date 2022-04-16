#include <stdio.h>

int main(void) {
int num1=9;
int num2=3;
int ris1,ris2,ris3;
ris1=num1|num2;
ris2=num1&num2;
ris3=num1^num2;
printf("%d,%d,%d",ris1,ris2,ris3);
//output ottenuto sono stati stampati questi risultati 11,1,10

return 0;


}
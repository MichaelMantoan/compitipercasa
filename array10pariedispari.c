#include<stdio.h>
 
int main()
{
  
   int i=0;
   int array[10];
   printf("inserire 10 numeri interi:\n");
   for(i=0;i<10;i++){
       printf("numero %d\n",i+1);
       scanf("%d",&array[i]);
   }
   printf("ecco i numeri pari \n");
   for(i=0;i<10;i++){
       if(array[i]%2==0){
           printf("%d -",&array[i]);
       }
      
   }
   printf("ecco i numeri dispari \n");
   for(i=0;i<10;i++){
       if(array[i]%2!=0){
           printf("%d -", &array[i]);
       }
      
   }
   printf("\n");
  
 return 0;
}

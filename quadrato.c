 #include<stdio.h>  
   
       
     int main(){   
       int numerocubo;
       printf("inserisci un numero positivo maggiore di 3 per stampare un quadrato\n");
       do{
       scanf("%d",&numerocubo);
       
       if(numerocubo>3){
           printf("*****\n");
           printf("*   *\n");
           printf("*   *\n");
           printf("*   *\n");
           printf("*****\n");
       }if(numerocubo<3){
           printf("reinserire il numero\n");
           }
           
       }while(numerocubo<3);
       
        

       return 0;    
    }    
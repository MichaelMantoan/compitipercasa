        #include<stdio.h>  
    #include <string.h>    
    int main(){    
      char str[100]="questa giornata ";    
      char *sub;    
      sub=strstr(str,"giornata");    
      printf("\nSubstring is: %s",sub);    
     return 0;    
    }    
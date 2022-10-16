#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vocali(char str[])
{
    int nvocali = 0;
for (int i = 0; i < strlen(str); i++)
{
  if (str[i] == 'a' || str[i] == 'i' || str[i == 'u' || str[i] == 'o' || str[i] == 'e')
  {
      nvocali++;
  }
  return nvocali;
}

int main(int argc, char *argv[])
{
    
    int nvocali;
    int nconsonanti;
    int totalevocali = 0;
    int totaleconsonanti = 0;
    for (int k; k < argc; k++)

    {
        nvocali = vocali(argv[k]);
        totalevocali = totalevocali + nvocali;
        totaleconsonanti = totalevocali - strlen(argv[k]);
    }
    printf("vocali: %d, consonanti: %d\n", totalevocali, totaleconsonanti);

    return 0;
}


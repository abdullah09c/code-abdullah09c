#include <stdio.h>
int main()
{
   char str[10];
   int t, i;
   scanf("%d", &t);
   while (t--)
   {
    int j = 1;
    while (j <= 8)
    {
     
     scanf("%s", str);
     
     for ( i = 0; str[i] != '\0'; i++)
     { 
      if(str[i] != '.') {
        printf("%c", str[i]);
      }

     }
     j++; 
    }
    printf("\n");
   }

   return 0;
}

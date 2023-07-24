#include <stdio.h>
int main()
{
   char str[10], name[10];
   int t, i;
   scanf("%d", &t);
   while (t--)
   {
    int j = 1, k = 0;
    while (j <= 8)
    {
     
     scanf("%s", str);
     
     for ( i = 0; str[i] != '\0'; i++)
     { 
      if(str[i] != '.') {
        name[k] = str[i];
        k++;
        break;
      }

     }
     j++; 
    }
    name[k] = '\0';
    printf("%s\n", name);
    
   }

   return 0;
}

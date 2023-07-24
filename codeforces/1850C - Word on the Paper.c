#include <stdio.h>
int main()
{
   char str[8][8];
   char name[8];
   int i, j, t;
   scanf("%d", &t);
   while (t--)
   {
    int k = 0;
    for ( i = 0; i < 8; i++)
    {
        scanf("%s", str[i]);
        for ( j = 0; j < 8; j++)
        {
          if(str[i][j] != '.'){
            name[k] = str[i][j];
            k++;
          }
        }
        
    }
    name[k] = '\0';
    printf("%s\n", name);

   }
   

   return 0;
}

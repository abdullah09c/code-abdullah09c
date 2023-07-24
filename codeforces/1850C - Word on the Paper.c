#include <stdio.h>
int main()
{
   char str[8][8];
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
            printf("%c", str[i][j]);
          }
        }
        
    }
        printf("\n");
   }
   

   return 0;
}

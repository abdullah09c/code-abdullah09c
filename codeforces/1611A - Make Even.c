#include <stdio.h>
#include <string.h>
int main()
{
   int t, i;
   scanf("%d", &t);
   while (t--)
   {
    char str[11];
    scanf("%s", str);
    int len = strlen(str);
    if((str[len-1] - 48) % 2 == 0)
    printf("0\n");
    else if((str[0] - 48) % 2 == 0)
    printf("1\n");
    else {
      int count = 0;
    for ( i = 0; i < len; i++)
    {
      if((str[i] - 48 ) % 2  == 0) {
        printf("2\n");
        break;
      }
      else
      count++;
    }
    if(count == len)
    printf("-1\n");
   }
   }
   

   return 0;
}

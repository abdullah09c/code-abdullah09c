#include <stdio.h>
int main()
{
   int a, b, c, t;
   scanf("%d", &t);
   while (t--)
   {
      scanf("%d%d%d", &a, &b, &c);
      if(a+b >= 10 || a+c >= 10 || b+c >= 10)
      printf("YES\n");
      else
      printf("NO\n");

   }
      
   

   return 0;
}

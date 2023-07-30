#include <stdio.h>
int main()
{
   int a, b, c , d;
   scanf("%d%d%d%d", &a, &b, &c, &d);
   int min32 = a, min256 = a;

   if(min256 > c)
   min256 = c;
   if(min256 > d)
   min256 = d;

   min32 -= min256;

   min32 = min32 > b ? b : min32;
   

   printf("%d", min32*32 + min256*256);



   return 0;
}

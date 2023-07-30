#include <stdio.h>

int min(int a, int b)
{
  return a < b ? a : b;
}

int main()
{
   int a, b, c , d;
   scanf("%d%d%d%d", &a, &b, &c, &d);
   int min32 , min256;
   
   min256 = min(a, min(c, d));
   a -= min256;
   min32 = min(a, b);

   printf("%d", min32*32 + min256*256);



   return 0;
}

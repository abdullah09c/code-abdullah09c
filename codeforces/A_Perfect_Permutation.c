#include <stdio.h>
int main()
{
   int n,i;
   scanf("%d", &n);
   if(n%2 != 0) {
   printf("-1");
   return 0;
   }
   for(i = 1; i <= n; i++)
   printf("%d ", i%2 == 0 ? i-1 : i+1 <= n ? i+1 : i);

   return 0;
}
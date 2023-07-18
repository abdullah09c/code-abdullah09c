#include <stdio.h>
int main()
{
   int n, num, t;
   scanf("%d", &t);
   while (t--)
   {
    scanf("%d", &num);
    for(n = 1; n-1 < num; n *= 2)
       num = num;  // i write this as i need only value of n but i need some statement to be execeuted. So i write this.
    printf("%d\n", n/2 - 1);
   }
    

   return 0;
}

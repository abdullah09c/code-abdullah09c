#include <stdio.h>
int main()
{
  int t, a,b, i;
  scanf("%d", &t);
  while(t--) {
    scanf("%d%d", &a, &b);
    if(!a)
    printf("1\n");
    else
    printf("%d\n", (a + 2*b) + 1);
    
  }
  
  return 0;
}

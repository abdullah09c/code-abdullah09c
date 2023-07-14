#include <stdio.h>
int main()
{
  int t, a,b, i;
  scanf("%d", &t);
  while(t--) {
    scanf("%d%d", &a, &b);
    printf("%d\n", !a ? 1 : a+2*b+1);
    
  }
  
  return 0;
}

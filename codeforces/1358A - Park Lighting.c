#include <stdio.h>
int main()
{
  int t,m,n;
  scanf("%d", &t);
  while(t--) {
    scanf("%d%d", &m, &n);
    printf("%d\n", (m*n + 1)/2);
  }
  
  return 0;
}

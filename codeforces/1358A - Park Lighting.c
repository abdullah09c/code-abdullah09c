#include <stdio.h>
int main()
{
  int t,m,n;
  scanf("%d", &t);
  while(t--) {
    scanf("%d%d", &m, &n);
    if(m*n % 2 == 0)
    printf("%d\n", (m*n)/2);
    else
    printf("%d\n", (m*n)/2 + 1);
  }
  
  return 0;
}

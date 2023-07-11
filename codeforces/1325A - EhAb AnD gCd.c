#include <stdio.h>
int main()
{
  int n,t;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    printf("1 %d\n", n - 1);
  }
  
  return 0;
}

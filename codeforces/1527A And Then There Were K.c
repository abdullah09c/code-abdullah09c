#include <stdio.h>
int main()
{
  int i, n, t;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    for(i = n; i > 0; i--) {
      if((i & i - 1) == 0) {
        printf("%d\n", i - 1);
        break;
      }
    }
  }
  
  return 0;
}

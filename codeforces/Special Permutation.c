#include <stdio.h>
int main()
{
  int t,n,i;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    for(i = 2; i <= n; i++) {
    printf("%d ", i);
    }
    printf("1");
    printf("\n");
  }
  
  return 0;
}

/*if i write 3 2 1 or 5 4 3 2 1.
here index[2] = 2 or index[3]=3 which does not satisfy the condition.
 condition : index != ith number
 */

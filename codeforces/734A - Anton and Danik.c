#include <stdio.h>
int main()
{
  int i, n, anton = 0 , danik = 0;
  scanf("%d", &n);
  char str[n+1];
  scanf("%s", str);
  for(i = 0; i < n; i++) {
    if(str[i] == 'A')
    anton++;
    else
    danik++;
  }
  
  printf("%s", anton > danik? "Anton" : anton == danik? "Friendship" : "Danik");
  
  return 0;
}

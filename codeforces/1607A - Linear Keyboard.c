#include <stdio.h>
int main()
{
  int t,i,j;
  char key[30], str[52];
  scanf("%d", &t);
  while(t--) {
    int temp1 = 0, result = 0, temp2 = 0;
    scanf("%s%s", key, str);
  for(i = 0; str[i]!='\0';i++) {
   for(j = 0; key[j]!='\0';j++){
     if(key[j] == str[i]){
       temp2 = j + 1;
       break;
     }
   }
   if(i!=0)
   result += abs(temp1 - temp2);
    temp1 = temp2;
    }
    
    printf("%d\n", result);
    
  }
  
  return 0;
}

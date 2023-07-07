#include <stdio.h>
#include <string.h>
int main()
{
	char a[1001], b[1001];
	int i, j, k, carry = 0, len1, len2, sum = 0, count = 0, max;
	int ara[1011];
	scanf("%s %s", a, b);
	
	len1 = strlen(a);
	len2 = strlen(b);
	
	if(len1 >= len2) {
		i = len1-1;
		j = len2-1;
		max = i+1;
	}
	else {
		i = len2-1;
		j = len1-1;
		max = i+1;
	}
	
	
	for(k = max; i >= 0; i--, j--,k--) {
		
	
		
	 sum = (a[i] - '0') + (b[j] - '0') + carry;
		
	
		
		if(sum >= 10) {
		carry = 1;
		sum -= 10;
		if(j == 0 && i!= 0) {
		ara[k-1] = a[i-1] - '0' + carry;
		i--;
		k--;
		}
		else if(i == 0 && j!= 0)
		ara[k-1] =  
		
		}
		else
		carry = 0;
		
		ara[i] = sum;
	}
/*	else {
		sum = (a[i] - '0');
		sum += carry;
		
		if(sum >= 10) {
			carry = 1;
			sum -= 10;
		}
		else
		carry = 0;
		
		ara[i] = sum;
	}
	
	}*/
	
	printf("\n\n");
	for(i = 0; i < max; i++)
	printf("%d\n", ara[i]);
	
	printf("\n%c* %c", a[len1-1], b[0]);
		
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void addtion(char* digit1, char* digit2, int len1, int len2);
void substraction(char* digit1, char* digit2, int len1, int len2);
void multiplication(char* digit1, char* digit2, int len1, int len2);
void power(char *digit1, char *digit2, int *x);


int main()
{
   int i,n;
   char digit1[1001], digit2[1001];
   printf("1. Addition\n");
   printf("2. Substraction\n");
   printf("Enter : ");
   scanf("%d", &n);
   printf("Enter First Digit : ");
   scanf("%s", digit1);
   printf("Enter Second Digit : ");
   scanf("%s", digit2);
   int len1 = strlen(digit1), len2 = strlen(digit2); // counting length of digit

   if(n == 1)
   addtion(digit1, digit2, len1, len2);
   else if(n == 2)
   substraction(digit1, digit2, len1, len2);




   return 0;
}




void addtion(char* digit1, char* digit2, int len1, int len2)
{
      int sum, ara[1001], k;
      int i;
      char temp[1001];
      // adjusting two digit for addition.
 if(abs(len1 - len2) > 0) {
      for ( i = 0; i < abs(len1 - len2) ; i++)
      {
         temp[i] = '0';
      }

   //merging digit
   if(len1 > len2) {
   strcat(temp, digit2);
   strcpy(digit2, temp);
   i = len1 - 1;
   }
   else {
      strcat(temp, digit1);
      strcpy(digit1, temp);
      i = len2 - 1;
   }

   }

   else
   i = len1 - 1;



      int d1, d2, carry = 0;
      int j = 0;
   for (; i >= 0; i--, j++)
   {
    d1 = digit1[i] - 48;
    d2 = digit2[i] - 48;
    sum = d1 + d2 + carry;

    if(sum >= 10) {
      ara[j] = sum - 10;
      carry = 1;
    }
    else {
      ara[j] = sum;
      carry = 0;
    }

   }

   if(carry == 1)
   ara[j] = 1;
   else
   j = j-1;

   // printing summation

   for(; j >= 0; j--)
   printf("%d", ara[j]);



}


void substraction(char* digit1, char* digit2, int len1, int len2)
{
      int sum, ara[1001], k;
      int i, flag;
   char temp[1001];
 if(abs(len1 - len2) > 0) {
      for ( i = 0; i < abs(len1 - len2) ; i++)
      {
         temp[i] = '0';
      }

   //merging digit
   if(len1 > len2) {
   strcat(temp, digit2);
   strcpy(digit2, temp);
   i = len1 - 1;
   }
   else {
      strcat(temp, digit1);
      strcpy(digit1, digit2);
      strcpy(digit2, temp);
      i = len2 - 1;
      flag = 1;
   }

   }

   else {
   if((digit1[0]-48) < (digit2[0]-48)) {
      strcpy(temp, digit1);
      strcpy(digit1, digit2);
      strcpy(digit2, temp);
      flag = 1;
   }
  i = len1 - 1;
   }
  // substraction
      int d1, d2, carry = 0;
      int j = 0;
   for (; i >= 0; i--, j++)
   {
    d1 = digit1[i] - 48;
    d2 = digit2[i] - 48;
    sum = d1 - d2 - carry;

    if(sum < 0) {
      ara[j] = sum + 10;
      carry = 1;
    }
    else {
      ara[j] = sum;
      carry = 0;
    }

   }


   j = j-1;

   // printing summation
   if(flag == 1)
   printf("-");
   for(; j >= 0; j--)
   printf("%d", ara[j]);

}


/*void multiplication(char* digit1, char* digit2, int len1, int len2)
{

      int sum, k;
      int i, flag;
      char temp[1001], mal1[1001], mal2[1001];
      // adjusting two digit for addition.
 if(abs(len1 - len2) > 0) {
      for ( i = 0; i < abs(len1 - len2) ; i++)
      {
         temp[i] = '1';
      }

   //merging digit
   if(len1 > len2) {
   strcat(temp, digit2);
   strcpy(digit2, temp);
   i = len1 - 1;
   k = len2 - 1;
   flag = 1;
   }
   else {
      strcat(temp, digit1);
      strcpy(digit1, digit2);
      strcpy(digit2, temp);
      i = len2 - 1;
      k = len1 - 1;
      flag = 2;
   }

   }

   else {
   i = len1 - 1;
   k = len2 - 1;
   flag = 1;
   }


      int d1, d2, carry = 0;
      int j;
   for (; k >= 0; k--)
   {
      for(j = 0; i >= 0; i--, j++) {
    d1 = digit1[i] - 48;
    d2 = digit2[k] - 48;
    sum = (d1 * d2 ) + carry;

    if(sum >= 10) {
      mal[j] = sum % 10;
      carry = sum / 10;
    }
    else {
      mal[j] = sum;
      carry = 0;
    }

   }
   }
}
*/

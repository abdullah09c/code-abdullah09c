//***********************BISMILLAHIR RAHMANIR RAHIM***********************
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <conio.h>

void pass_change(char pass[])
{
up:
   char s[15];
   system("cls");
   printf("Enter old password : \n");
   scanf("%s", s);
   if (strcmp(s, pass) == 0)
   {

      system("cls");
      printf("Enter New Password : \n");
      scanf("%s", s);
      strcpy(pass, s);
      system("cls");
      system("color 2");
      printf("Password Changed Successful\n");
      return;
   }
   else
   {
      system("cls");
      system("color 4");
      printf("Password not matched!\a\n\n");
      printf("Press any key to try again Or press E to goto homepage\n");
      char ch;
      scanf(" %c", &ch);
      if (ch == 'e')
      {
         return;
      }
      else
         goto up;
   }
}

int log_in(char pass[])
{
up:
   char s[15];
   system("cls");
   printf("Enter Password : ");
   scanf("%s", s);
   if (strcmp(pass, s) == 0)
   {
      system("cls");
      system("color 2");
      printf("Password Matched!.........\n");
      // loading....
      return 1;
   }
   else
   {
      system("cls");
      system("color 4");
      printf("Wrong Password!\a\n");
      printf("Press any key to continue or Press E to goto homepage\n");
      char ch;
      scanf(" %c", &ch);
      if (ch == 'e')
         return 0;
      else
         goto up;
   }
}

int main()
{

   char pass[15] = "1234" , s[100];
top:
   system("color 7");
   system("cls");
   printf("\t\t----------[Meal Manager]------------\n");
   printf("\t    ---------------------------------------------\n");
   printf("1. Log In\n");
   printf("2. Change Password\n");
   printf("3. About\n");
   printf("4. Exit\n");
   printf("Enter : ");
   scanf("%s", s);
   if (!strcmp(s, "1"))
   {
      if (log_in(pass) == 1)
      {
         system("color 9");
         printf("Welcome");
         getch();
      }
      else
      {
         goto top;
      }
   }
   else if (!strcmp(s, "2"))
   {
      pass_change(pass);
      goto top;
   }
   else if (!strcmp(s, "3"))
   {
      system("cls");
      printf("Abdullah Al Fuwad");
      getch();
      goto top;
   }
   else if (!strcmp(s, "4"))
      system("exit");
   else
   {
      system("cls");
      goto top;
   }

   return 0;
}

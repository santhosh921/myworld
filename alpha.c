#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char c;
printf("\nInput:");
scanf("%c",c);
if(isAlpha(c))
{
  if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
  printf("vowle");
  else
  printf("constant");
}
else
printf("\ninvalid");
getch();
}

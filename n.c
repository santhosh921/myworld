#include<stdio.h>
void main()
{
int n;
printf("\nInput:")
scanf("%d",&n);
if(n>0)
{
  if(n%2==0)
  printf("\nEven");
  else
  printf("\nOdd");
}
else
printf("\nInvalid");
getch();
}
  

# 19ECB132
#include<stdio.h>
int main()
{
  int i,f=1,num;
  printf("Enter a number: ");
  scanf("%d",&num);
  if (num>=10)
    printf("the number is too large");
  if (num<0)
    printf("the number is negative");
  else
  {
  for(i=1;i<=num;i++)
      f=f*i;
     
  printf("Factorial of %d is: %d",num,f);
  }
  return 0;
}

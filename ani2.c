#include<stdio.h>
int sumofdigits(int n)
{
if (n==0)
	return 0;
return(n%10)+sumofdigits(n/10);
}
int main()
{
int num;
printf("Enter your number");
scanf("%d",&num);
if (num<0)
	num=-num;
int result=sumofdigits(num);
printf("Sum of digits %d",result);
return 0;
}

#include<stdio.h>
int main()
{
	int n,num,digit,rev=0,sum=0;
	printf("enter a 4-digit integer");
	scanf("%d",&num);
	n=num;
	do
	{
		digit=num% 10;
		rev=rev*10+digit;
		num=num/10;
		sum=sum+digit;
	}
	while(num!=0);
	if(rev=n)
	{
		printf("The number%d is a palindrom",n);
	}
	else
	{
		printf("The number%d is not a palindrom",n);
		
	}
	printf("The sum of the digits is %d",sum);
	 
	return 0;
}

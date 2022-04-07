#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers");
	scanf("%f%f",&a,&b);
	c=(a>b)?a:b;
	printf("The largest number between %f",c);
	
	return 0;
}

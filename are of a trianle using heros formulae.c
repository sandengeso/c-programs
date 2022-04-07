#include<stdio.h>
#include<math.h>
int main()

{
	float a,b,c,s,A;
	printf("enter three sides of a triangle");
	scanf("%f%f%f",&a,&b,&c);
	s=0.5*(a+b+c);
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Your answer is %f",A);
	
	return 0;
}

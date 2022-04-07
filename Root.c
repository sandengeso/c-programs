#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2,real,imag;
	printf("Enter the coefficients");
	scanf("%f%f%f", &a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("Distinct Roots X1=%f,X2=%f",x1,x2);
	}
	else if(d==0)
	{ vc
		x1=-b/2*a;
		printf("double roots,x1=%f",x1);
	}
	else
	{
		real=-b/2*a;
		imag=sqrt(d)/2*a;
		printf("complex roots,x1=%f+%fi,x2=%f-%f i",real,imag,real,imag);
	}
	
	return 0;
}

#include<stdio.h>
#include<math.h>

double findsqrt(double x)
{
	if(x < 2)
		return 1;

	double y = x;
	double z = ( y +(x/y))/2;

	while(fabs(y-z) >= 0.00001)
	{
		y = z;
		z = (y +(x/y))/2;
	}
	return z;
}


int main()
{
	double n;
	printf("Enter any number\n");
	scanf("%lf",&n);
	double ans = findsqrt(n);
	printf("%.5f is the square root of %lf\n",ans,n);	
}

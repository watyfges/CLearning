#include <stdio.h>
#include <math.h>
int main ()
{
	float x = 0;
	float y = 0;
	printf("input a number");
	scanf("%.f",&x);
	if(x>=0 && x<=8)
	{
		y=sin(x)+2*pow(x,2)+10;
	}
	else
	{
		y=fabs(x-3*pow(x,3)-9);
	}
	printf("y= %.2f\n",y);
	return 0;
}
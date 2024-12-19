#include <stdio.h>
int main()
{
	float x,y;
	printf("Input the e-charge");
	scanf("%f",&x);
	if(x<=50)
	{
		y=0.53*x;
	}
	else
	{
		y=0.53*50+0.58*(x-50);
	}
	printf("you should pay: %f",y);
	return 0;
}
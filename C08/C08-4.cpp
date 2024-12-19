#include <stdio.h>
int main()
{
	float x,y;
    printf("Input the weight of the peach\n");
    scanf("%f",&x);
    if(x>10)
    {
    	y=9*x;
    	printf("you should pay: %f",y);
	}
	else
	{
		y=10*x;
		printf("you should pay: %f",y);
	}
	return 0;
}
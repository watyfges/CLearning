#include <stdio.h>
#define P 3.141592653589793238462643383279502884
int main ()
{
	float r,v;
	scanf("%f",&r);
	v=3*P*r*r*r/4;
	printf("V= %.2f \n",v);
	return 0;
}

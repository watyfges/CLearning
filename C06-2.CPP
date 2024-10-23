#include <stdio.h>
int main()
{
	int num,h,t,o;
	for (num=100;num<=999;num++)
	{
		h=num/100;
		t=(num/10)%10;
		o=num%10;
		if ((o*o*o)+(t*t*t)+(h*h*h)==num)
		{
			printf("%d\n",num);
		}
	}
	return 0;
}
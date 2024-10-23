#include <stdio.h>
int main()
{
	int a,sum;
	sum=0;
		for (a=1;a<=99;a=a+2)
		{
			sum=sum+a;
		}
	printf("%d\n",sum);
	return 0;
}
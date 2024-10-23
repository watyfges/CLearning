#include <stdio.h>
int main()
{
	int a,b,c;
    printf("Enter a Number:");
	scanf("%d",&a);
	if (a<0)
	{
		b=a*a;
		c=b/-a;
		printf("%d\n",c);
	} else
		printf("%d\n",a);
	return 0;
}
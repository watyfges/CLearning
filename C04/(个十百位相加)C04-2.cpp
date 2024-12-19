#include <stdio.h>
int main()
{
	int a,bai,shi,ge,sum;
	printf("Enter a Number:");
    scanf("%d",&a);
	bai=a/100;
	shi=(a/10)%10;
	ge=a%10;
	sum=bai*shi*ge;
	printf("%d\n",sum);
	return 0;
}

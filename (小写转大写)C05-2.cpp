#include <stdio.h>
int main()
{
	char a,b;
	scanf("%c",&a);
	if (a>=65 && a<=90)
	{
		b=a+32;
		printf("%c\n",b);
	} else
		printf("%c\n",a);
	return 0;
}

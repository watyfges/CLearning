#include <stdio.h>

int main ()
{
    int num1, num2, over;

	printf("First Number\n");
	scanf("%d",&num1);

    printf("Second Number\n");
	scanf("%d",&num2);
	
	if (num1 < num2)
		over=num1;
		num1=num2;
		num2=over;

	printf("%d %d\n",num1,num2);
	return 0;
}
//读取三个字符 a、b 和 c，然后将这三个字符的 ASCII 值相加并输出结果
#include <stdio.h>
int main()
{
	char a,b,c;
	int d;
	scanf("%c",&a);
	getchar();
	scanf("%c",&b);
	getchar();
	scanf("%c",&c);
	d=a+b+c;
	printf("%d\n",d);
	return 0;
}

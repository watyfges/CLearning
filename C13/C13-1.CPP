#include <stdio.h>

void swap(int *num1,int *num2){
	if (*num1<*num2){
		int cache;
		cache=*num1;
		*num1=*num2;
		*num2=cache;
	}
}

int main(){
	int a;
	int b;
	scanf("%d",&a);
	scanf("%d",&b);
	swap(&a,&b);
	printf("%d %d\n",a,b);
	return 0;
}

#include <stdio.h>
long factorial(int n);
int main(){
	int n;
	long result;
	scanf("%d",&n);
	result=factorial(n);
	printf("%ld\n",result);
	return 0;
}

long factorial(int n){
	if (n==0||n==1){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
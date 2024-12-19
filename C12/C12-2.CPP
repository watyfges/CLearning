#include <stdio.h>
int fmin(int n){
	int num,min,i;
	scanf("%d",&min);
	for (i=1;i<n;i++){
		scanf("%d",&num);
		if(num<min){
			min=num;
		}

	}
	return min;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fmin(n));
	return 0;
}
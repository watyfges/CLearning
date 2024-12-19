#include <stdio.h>
int main(){
	int n,p;
	printf("输入n\n");
	scanf("%d",&n);
	int num[100];
	int i;
	for(i=0;i<n;i++){
		printf("输入%d个数\n",n);
		scanf("%d",&num[i]);
	}
	scanf("%d",&p);
	int count=0;
	for(i=0;i<n-1;i++){
		if(num[i]+num[i+1]==p){
			count++;
		}
	}
	printf("结果是%d\n",count);
	return 0;
}



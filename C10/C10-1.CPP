#include <stdio.h>
int main(){
	int a[10],n,max,i,count=0;
    printf("输入整数的个数n：");
    scanf("%d",&n);
	printf("输入%d个整数：",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++){
		if (a[i]>max){
			max=a[i];
		}
	}
	for(i=0;i<n;i++){
		if (a[i]==max){
			count=count+1;
		}
	}
	printf("最大值%d\n",max);
	printf("出现了%d次\n",count);
	return 0;
}
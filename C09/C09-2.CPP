#include <stdio.h>
int main(){
	int jz[3][3];
	int i,j,sum=0;
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("输入第%d一行第%d个元素: ",i+1,j+1);
			scanf("%d",&jz[i][j]);
			if (i==j){
				sum=sum+jz[i][j];
			}
		}
	}
	printf("对角线元素之和为%d\n",sum);
	return 0;
}
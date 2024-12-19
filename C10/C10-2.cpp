#include <stdio.h>
int main(){
	int m,n,i,j,sum=0;
	printf("下面要输入一个矩阵哦，m要小于20，n要小于10\n");
	printf("输入矩阵的行数m：");
    scanf("%d",&m);
	printf("输入矩阵的列数n：");
	scanf("%d",&n);

	if (m>20||n>10||m<=0||n<=0){
		printf("滚\n");
		return 1;
	}

    int juzhen[20][10];
	printf("输入矩阵的元素：\n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d",&juzhen[i][j]);
		}
	}

    for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (i==0||i==m-1||j==0||j==n-1){
				sum=sum+juzhen[i][j];
			}
		}
	}

	printf("最外圈元素之和为:%d\n",sum);
	return 0;
}
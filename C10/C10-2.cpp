#include <stdio.h>
int main(){
	int m,n,i,j,sum=0;
	printf("����Ҫ����һ������Ŷ��mҪС��20��nҪС��10\n");
	printf("������������m��");
    scanf("%d",&m);
	printf("������������n��");
	scanf("%d",&n);

	if (m>20||n>10||m<=0||n<=0){
		printf("��\n");
		return 1;
	}

    int juzhen[20][10];
	printf("��������Ԫ�أ�\n");
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

	printf("����ȦԪ��֮��Ϊ:%d\n",sum);
	return 0;
}
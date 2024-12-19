#include <stdio.h>
int main(){
	float a[10],sum=0.0;
	int i;
		for(i=0;i<10;i++){
			scanf("%f",&a[i]);
			sum=sum+a[i];
		}
	float average = sum/10;
	printf("%.2f\n",average);
	return 0;
}
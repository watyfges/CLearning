#include <stdio.h>
int min(int x,int y);
int main(){
	int a,b,c;
	scanf("%d",&a);
    scanf("%d",&b);
	c=min(a,b);
	printf("min is %d\n",c);
	return 0;
}
int min(int x,int y){
	int z;
	z=x<y?x:y;
	return(z);
}
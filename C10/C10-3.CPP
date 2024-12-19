#include <stdio.h>
int main(){
	char a[100];
	int i;
	scanf("%99[^\n]",a);
	for(i=0;a[i]!='\0';i++){
		if (a[i]>=97&&a[i]<=122){
			a[i]=a[i]-32;
		}else if (a[i]>=65&&a[i]<=90){
			a[i]=a[i]+32;
		}
	}
	printf("%s\n",a);
	return 0;
}
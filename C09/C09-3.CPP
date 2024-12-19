#include <stdio.h>
int main(){
    int i,a[10],minnumber=0;
    for(i=0;i<10;i++){
        printf("输入第%d个数 ",i+1);
        scanf("%d",&a[i]);
        if(a[i]<a[minnumber]){
            minnumber=i;
        }
    }
    int cache=a[0];
    a[0]=a[minnumber];
    a[minnumber]=cache;
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

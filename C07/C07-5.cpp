#include <stdio.h>
int main()
{
    int n,num;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int s=1;
        for(int j=1;j<=n;j++)
        {
            s=s*j;
        }
        num=num+s;
    }
    printf("%d",num);
    return 0;
}


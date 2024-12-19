#include <stdio.h>
int main()
{
    int a[10];
    int b=0;
    for (int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if (a[i] % 2==0)
        {
            b++;
        }
    }
    printf("%d",b);
    return 0;
}

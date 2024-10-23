#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,z,s,area;
    //获取三边长度
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of y: ");
    scanf("%f",&y);
    printf("Enter the value of z: ");
    scanf("%f",&z);
    //判断三角形是否成立
    if (x+y>z && x+z>y && y+z>x)
    {
        //成立开始计算
        s=(x+y+z)/2;
        area=sqrt(s*(s-x)*(s-y)*(s-z));
        printf("Area is: % .2f\n",area);
    }
    //三角形不成立
    else printf("This triangle does not hold");
    return 0;
}
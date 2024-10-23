#include <stdio.h>
int main()
{
    float x,y,fx;
    printf("Enter X:");
    scanf("%f",&x);
    printf("Enter Y:");
    scanf("%f",&y);
    if (x>0 && y>0)
        fx=(x*x)+(y*y);
    else if (x>0 && y<=0)
        fx=(x*x)-(y*y);
    else if (x<=0 && y>0)
        fx=x+y;
    else if (x<=0 && y<=0)
        fx=x-y;
    printf("f(x)=% .2f\n",fx);
    return 0;

}

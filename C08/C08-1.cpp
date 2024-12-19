#include <stdio.h>
#include <math.h>

int main() {
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    
    if (a < 0) 
	{
        printf("Input data error\n");
    } 
	else 
	{
        printf("Square root: %.2f\n", sqrt(a));
    }
    
    return 0;
}

#include <stdio.h>
int main()
{
    int score;
    scanf("%d",&score);
    if (90<=score&&score<=100)
    {
        printf("Your score is A");
    }
    else if (75<=score&&score<=89)
    {
        printf("Your score is B");
    }
    else if (60<=score&&score<=74)
    {
        printf("Your score is C");
    }
    else if (0<=score&&score<=59)
    {
        printf("Your score is D");
    }
    else
    {
        printf("Low");
    }
    return 0;
}


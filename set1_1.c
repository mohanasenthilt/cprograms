#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n")
    scanf("%d",&n)
    if(n>0)
    {
        printf("positive")
    }
    else if(n<0)
    {
        printf("negative")
    }
    else if(n=0)
    {
        printf("zero")
    }
    return 0;
}

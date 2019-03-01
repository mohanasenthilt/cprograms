#include <stdio.h>

int main()
{
    int n,t,r,sum=0;
    printf("enter n");
    scanf("%d",&n);
    t=n;
  while(t!=0)
    {
        r=t%10;
        sum=sum*10+r;
        t=t/10;
 }
 if(n==sum)
{
    printf("pallindrome");
}
else
{
    printf("not pallindrome");
}
    return 0;
}

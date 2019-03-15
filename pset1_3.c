#include <stdio.h>
void main()
{
    int n,r,t,s=0;
    printf("enter n");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=t%10;
        s=s*10+r;
        t=t/10;
    }
    printf("%d",s);
    getch();
}

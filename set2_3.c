#include <stdio.h>
int main()
{
   int n,i,c=0;
   scanf("%d",&n);
   if(n>0)
   {
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       c++;
   }
   if(c==2)
   printf("yes");
   else
   printf("No");
   }
   else
   printf("Invalid");
    return 0;
}

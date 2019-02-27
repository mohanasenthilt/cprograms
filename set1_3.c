#include <stdio.h>
#include<conio.h>
int main()
{
    char n;
    printf("enter n");
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonent");
    }
    
    return 0;
}



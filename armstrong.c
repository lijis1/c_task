
#include <stdio.h>
int main() 
{
    int x,y,z,a,n;
    printf("enter the number");
    scanf("%d",&n);
    x=n%10;
    y=n/10;
    z=y%10;
    a=y/10;
    if((x*x*x)+(a*a*a)+(z*z*z)==n)
    {
        printf("armstrong number\n");
    }
    else
    {
        printf("not an armstrong number");
    }
     return 0;
}

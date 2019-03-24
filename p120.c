#include<stdio.h>
int main()
{
    int n,base=1,b=0,r,t,l=0,c=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%2;
        b=b+(r*base);
        n=n/2;
        base=base*10;
    }
    t=b;
    if(t!=0)
    {
    while(t)
    {
        t=t/10;
        l++;
    }
    printf("%d",l);
    }
    else
    printf("1");
}

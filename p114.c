#include<stdio.h>
int main()
{
    int a,b,c,i,j,p=1;
    scanf("%d%d%d",&a,&b,&c);
    while(b)
    {
       p=p*a;
       b--;
    }
    printf("%d",p);
}

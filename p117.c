#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int i,l=0,j=0,m=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
        m++;
    }
    for(j=0;j<m;j++)
    {
            printf("%c-",b[j]);
    }
}

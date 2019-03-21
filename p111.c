#include<stdio.h>

int main() {
   int n,m,i,j,a[1000],b[1000],c[1000],k=0,l=0,d=0,t;
   scanf("%d%d",&n,&m);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=0;j<m;j++)
   {
       scanf("%d",&b[j]);
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
   {
       if(a[i]==b[j])
       {
           //printf("%d ",a[i]);
           b[j]='*';
           c[k]=a[i];
           k++;
           l++;
       }
   }
   }
   for(k=0;k<l;k++)
   {
       for(d=k+1;d<l;d++)
       {
       if(c[k]>c[d])
       {
          t=c[k];
          c[k]=c[d];
          c[d]=t;
       }
   }
   }
   for(k=0;k<l;k++)
   {
   printf("%d ",c[k]);
   }
}

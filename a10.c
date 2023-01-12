#include<stdio.h>
int main()
{
    
    int n,m;
    scanf("%d",&n);
    int st[n];
    for(int i=1;i<=n;i++)
    scanf("%d",&st[i]);

   m=st[0]; 
   for(int j=0;j<n;j++)
   
   if(st[j]<m)
   m=st[j];
      printf("%d",m);  

}
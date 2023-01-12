#include<stdio.h>
int main()
{
    
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   m=a[0]; 
   for(int j=0;j<n;j++)
   
    {
      if(a[j]>m)
      m=a[j];}  
    
        
printf("%d",m);

}
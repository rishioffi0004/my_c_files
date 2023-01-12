#include<stdio.h>
int main() {
    int n,r,c=0,p;
    
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in array");
    for (int i=0;i<n;i++)  
    scanf("%d",&a[i]);
    printf("no of times to be rotated");
    scanf("%d",&r);
int t=a[0];
for(int i=0;i<r;i++)
for(int j=0;j<n;j++)
{
    
    a[j]=a[j+1];
    if(j==n-1)
    a[n-1]=t;
}
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}



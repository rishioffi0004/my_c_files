#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int no[n];
    for(int i=1;i<=n;i++)
    {
    scanf("%d",&no[i]);
    }
    for(int j=1;j<=n;j++)
    {
        
        if(no[j]%2==0) 
        printf(" %d",no[j]);
        
    }
    printf("\n");
    for (int i=1;i<=n;i++) 
    {
        if (no[i]%2==1) 
        printf(" %d",no[i]);
    }
    
    
}
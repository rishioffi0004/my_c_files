#include<stdio.h>
int main()
{
    int n,s=0,a,sd;
    scanf("%d",&n);
    int no[n];
    for(int i=1;i<=n;i++)
    {
    scanf("%d",&no[i]);
    }
    for(int j=1;j<=n;j++)
    {
        
        s+=no[j];
        
    }
    a=s/n;
    for(int j=1;j<=n;j++)
    {
    if(a>no[j]) {
    sd=a-no[j];
        printf("%d %d",no[j],sd); }
    else if(no[j]>a)
    {sd=no[j]-a;
    printf("%d %d",no[j],sd); }
    sd=0;   

        
    }
}
    
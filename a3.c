#include<stdio.h>
int main()
{
    int n,s=0,a;
    scanf("%d",&n);
    int no[n];
    for(int i=1;i<=n;i++)
    {
    scanf("%d",&no[i]);
    s+=no[i];
    }
    a=s/n;
    printf("%d\n%d\n",s,a);
    
    
}
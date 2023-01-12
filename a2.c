#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int no[n];
    for(int i=1;i<=n;i++)
    scanf("%d",&no[i]);
    for (int i=n;i>=1;i--)
    printf("%d\t",no[i]);

    
}
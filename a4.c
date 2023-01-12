#include<stdio.h>
int main()
{
    int c,p=0,n=0,z=0;
    scanf("%d",&c);
    int no[c];
    for(int i=1;i<=c;i++)
    {
    scanf("%d",&no[i]);
    if(no[i]>0)
    p+=1;
    else if(no[i]<0)
    n+=1;
    else if(no[i]==0)
    z+=1;
    }
    
    printf("%d\n%d\n%d\n",p,n,z);
    
    
}
#include<stdio.h>
int main() {
    int a,r,c=0,d;
    scanf("%d %d",&a,&d);
    while(a>0)
{
    r=a%10;
    if(r==0)
    r=1;
    c=r+(c*10);
    

    a=a/10;
}

if(d==c)
printf("pallindrom");
else printf("not");
}
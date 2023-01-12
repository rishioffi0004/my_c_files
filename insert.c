#include<stdio.h>
int main() {
    int n,p,e;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n+1];
    printf("enter elements in array");
    for (int i=0;i<n;i++) 
    scanf("%d",&a[i]);
    printf("enter the element with position");
    scanf("%d %d",&e,&p);
for(int i=n;i>=p;i--)
    a[i]=a[i-1];
    a[p]=e;

for(int i=0;i<n+1;i++)
printf("%d ",a[i]);


}


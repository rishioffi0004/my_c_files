#include<stdio.h>
int main() {
    int n,p,e,E;
    
    printf("enter size of array");
    scanf("%d",&n);

    printf("enter no of elements to be added");
    scanf("%d",&E);


    int a[n+E];
    printf("enter elements in array");
    for (int i=0;i<n;i++)  
    scanf("%d",&a[i]);
    

    int elem[E];
    printf("enter the elemnts  to be added");
    for(int i=0;i<E;i++)
    scanf("%d",&elem[i]);

    int pos[E];
    printf("enter the index");
    for(int i=0;i<E;i++) 
    scanf("%d",&pos[i]);
    

for(int i=0;i<E;i++) {
for(int j=n+E;j>pos[i];j--)
{
    a[j]=a[j-1]; }
int t=pos[i];
a[t]=elem[i];
}
for(int i=0;i<n+E;i++)
printf("%d ",a[i]);
}
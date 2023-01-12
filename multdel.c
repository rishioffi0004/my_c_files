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

    int pos[E];
    printf("enter the index");
    for(int i=0;i<E;i++) 
    scanf("%d",&pos[i]);
    

for(int i=0;i<E;i++) {
for(int j=pos[i]; j<n+E-1;j++)
{
    a[j]=a[j+1]; }
a[n-1]=0;
}
for(int i=0;i<n-E;i++)
printf("%d ",a[i]);
}
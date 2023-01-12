#include<stdio.h>
int main() {
    int n,d,c=0,p;
    
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in array");
    for (int i=0;i<n;i++)  
    scanf("%d",&a[i]);
    printf("no to be deleted");
    scanf("%d",&d);


for(int j=0;j<n;j++){
if(a[j]==d)
{
c++;    
for(int i=j;i<n;i++) 
a[i]=a[i+1];
}}
for(int i=0;i<n-c;i++)
printf("%d ",a[i]);

}
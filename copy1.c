//rewrite odd and even no in different array
#include<stdio.h>
int main() {
    int n,s=0,c=0;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n],o[n],e[n];
    printf("\nenter elements in array");
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
for(int i=0;i<n;i++)
{
   if(a[i]%2==0){ 
   e[i]=a[i];
   printf("%d ",e[i]); 

}}
printf("\n");
for(int i=0;i<n;i++) {
if(a[i]%2==1) {
o[i]=a[i];        
printf("%d ",o[i]);
}}
return 0;
}
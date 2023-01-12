//count occurence of element of all elements
#include<stdio.h>
int main() {
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n],f[n];
    printf("\nenter elements in array");
    for (int i=0;i<n;i++) {
    scanf("%d",&a[i]);
    f[i]=0; }

  
for(int i=0;i<n;i++){int c=0;
for(int j=0;j<n;j++) {
    if(a[i]==a[j])
    c++;
}
printf("%d occurs %d times\n",a[i],c);
}}


#include<stdio.h>
int main() {
    int n,f,c;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("\nenter elements in array");
    for (int i=0;i<n;i++) {
    scanf("%d",&a[i]);
 }

  
for(int i=0;i<n-1;i++)
{
    c=0;f++;
for(int j=0;j<n-1-i;j++) {
    if(a[j]>a[j+1])
    {
        int t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
        c=1;
    }
}
if(c==0)
break;}
for(int i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n%d",f);
}


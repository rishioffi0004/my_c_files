#include<stdio.h>
int main() {
    int n,p,p2;
    scanf("%d",&n);
    int a[n],a1[n];
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);

    int s=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<s) {
        s=a[i];
        p=i; }}
    int m=a[0];    
    for(int i=0;i<n;i++) {
        if(a[i]>m) {
        m=a[i];
        p2=i;}
    }
    printf("%d %d %d\n",s,p,p2); 
int c;          
for(int i=0;i<n;i++)
{
  a1[i]=a[i];
  if(i==p ||i==p2){
    
    a1[p]=a[p2];
    a1[p2]=a[p];

  }
  printf(" %d",a1[i]);
}
return 0;
}
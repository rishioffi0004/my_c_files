#include<stdio.h>
int main() {
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("\nenter elements in array");
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    int f,c,k=a[n-1];
    printf("no to find");
    scanf("%d",&f);
    for (int i=0;i<n;i++)
    {
        
        if(a[i]==f) {
           c=i;
           printf("%d\n",c);} 
        else if(a[i]!=f && i==(n-1))
        printf("not found");
    }
}
#include<stdio.h>
int main() {
    int r,s=0,s1,m;
    
    printf("emter rows of array");
    scanf("%d",&r);
    int a[r][r];
  
    printf("enter elements of matrix\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<r;j++)
    scanf("%d",&a[i][j]);

    printf("matrix\n");
    for(int i=0;i<r;i++){
    for(int j=0;j<r;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }
printf("answer\n");
for(int i=0;i<r;i++)
{
    for(int j=0;j<r;j++)
    {   
        s=a[i][i];
        s1=a[i][r-1-i];
        if( i==j) {  
        m=s1;
        printf("%d ",m);}
        
        else if(i+j==r-1) {   
        m=s;
        printf("%d ",m);}
    else    
    printf("%d ",a[i][j]);
}
printf("\n");
}
}

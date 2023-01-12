#include<stdio.h>
int main() {
    int r,c,sum=0;
    
    printf("emter rows of array");
    scanf("%d",&r);
    printf("emter col. of array");
    scanf("%d",&c);
    int a[r][c];
      if(r==c)
  { 
    printf("enter elements of matrix\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    printf("matrix\n");
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }

for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        if(i+j==r-1 )
        sum+=a[i][j]; 
    }
}
printf("sum of diagonal elements are:%d",sum);
}
}
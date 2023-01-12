#include<stdio.h>
int main() {
    int r,c,sum=0,sum1=0;
    
    printf("emter rows of array");
    scanf("%d",&r);
    printf("emter col. of array");
    scanf("%d",&c);
    int a[r][c];
 
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
       sum+=a[i][j];
    }
printf("sum of %d row:%d\n",i+1,sum);
sum=0;
}
for(int i=0;i<c;i++)
{
    for(int j=0;j<r;j++)
    {
       sum1+=a[j][i];
    }
    printf("sum of %d column:%d\n",i+1,sum1);
    sum1=0;
}
}
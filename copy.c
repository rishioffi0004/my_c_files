#include<stdio.h>
int main()  
{
    int r,c,m,n;
    printf("enter rows:");
    scanf("%d %d",&r,&m);
    printf("enter coloumns");
    scanf("%d %d",&c,&n);
    int a[r][c],b[m][n],s[m][n];
    printf("enter elements of first matrix");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    printf("enter elements ofsecond matrix");
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&b[i][j]);


    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }
    printf("second matrix\n");
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    printf("%d ",b[i][j]);
    printf("\n");
    }
    printf("sum of two martix\n");
    if(r==m && c==n)
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    {
        s[i][j]=a[i][j]+b[i][j];
    printf("%d ",s[i][j]);
    }
    printf("\n");
    }
    else
    printf("sum not possible");
}

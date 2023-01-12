#include<stdio.h>
int main()  
{
    int r,c,s=0;
    printf("enter rows:");
    scanf("%d",&r);
    printf("enter coloumns");
    scanf("%d",&c);
    int a[r][c];
    printf("enter elements");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    
    printf("matrix\n");
    for(int i=0;i<r;i++) {
    for(int j=0;j<c;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }

    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++) {
    
        printf("%d ",a[j][i]);
    }
    printf("\n");
}
}
    

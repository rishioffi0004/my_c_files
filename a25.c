#include<stdio.h>
int main() {
    int r,c;
    printf("emter rows of array");
    scanf("%d",&r);
    printf("emter col. of array");
    scanf("%d",&c);
    int a[r][c],b[r][c],s[r][c];
    printf("enter elements of matrix1\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    
    printf("enter elements of matrix2\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)    
    scanf("%d",&b[i][j]);
    
    printf("multiplication\n");
    
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            
              s[i][j]=a[i][j]*b[i][j];
              printf("%d ",s[i][j]);
        }
        printf("\n");
    }
}
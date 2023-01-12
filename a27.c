#include<stdio.h>
int main() {
    int r,c,r1,c1;
    printf("emter rows of array");
    scanf("%d",&r);
    printf("emter col. of array");
    scanf("%d",&c);
    printf("emter rows of array");
    scanf("%d",&r1);
    printf("emter col. of array");
    scanf("%d",&c1);
     if(r==r1 && c==c1) {
    int a[r][c],b[r1][c1];
    printf("enter elements of matrix1\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    
    printf("enter elements of matrix2\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)    
    scanf("%d",&b[i][j]);
    
    int e=0;
   
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            
              if(a[i][j]==b[i][j])
               e++;
        }
    }
    if(e==(r*c))
    printf("equal");
    else 
    printf("not equal");
}
else
printf("not equal");
}
#include<stdio.h>
int main () {
  int r,c;
  printf("enter rows:");
  scanf("%d",&r);
  printf("enter coloumns:");
  scanf("%d",&c);
  int a[r][c];
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
  scanf("%d",&a[i][j]);
  
printf("matrix1\n");
  for(int i=0;i<r;i++) {
  for(int j=0;j<c;j++){
  printf("%d ",a[i][j]);
}printf("\n");
}


printf("zigzac\n");

for(int i=0;i<r;i++)
  {
  
  if(i%2!=0)
{
    for(int j=c-1;j>=0;j--)
    {
        printf("%d ",a[i][j]);      
    }
            printf("\n");
}
else
{
    for(int j=0;j<c;j++) 
    {
       printf("%d ",a[i][j]);
  }
  printf("\n");
}
}
}
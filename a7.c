#include<stdio.h>
int main()
{
    
    
    int tr[10],bi[10];
    
    for(int i=1;i<=10;i++) 
        scanf("%d",&tr[i]);
    
    for (int i=1;i<=10;i++) 
        scanf("%d",&bi[i]);
    for (int i=1;i<=10;i++) {
        if(tr[i]>bi[i])
        printf("triumph won\n");
        else
        printf("biden won\n");

    }

}
    
#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    (a&1)?printf("odd"):(a|0)&&(a!=0)?printf("even"):printf("zero");
    
    return 0;
    
}
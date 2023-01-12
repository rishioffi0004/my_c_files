#include<stdio.h>
int main() {
    int a=130;
    a=(a>>6)-a;
    printf("%d",a);
    return 0;
    
}
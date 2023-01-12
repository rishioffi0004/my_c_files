#include<stdio.h>
int main() {
    int a=10,b=12;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d %d",a,b);
    return 0;
    
}
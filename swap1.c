#include<stdio.h>
int main() {
    int a=10,b=12,c=0;
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
    return 0;
    
}
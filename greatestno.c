#include<stdio.h>
int main() {
    int a=10,b=12,c=14;
    (a>b)&&(a>c)&&printf("a is grest");
    (b>a)&&(b>c)&&printf("b is grest");
    (c>b)&&(c>a)&&printf("c is grest");
    return 0;
    
}
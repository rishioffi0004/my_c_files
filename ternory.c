#include<stdio.h>
int main() {
    int a=114,b=122,c=10;
    (a>b) && (a>c)?printf("a is grest"):(b>c)&&(b>a)?printf("b is grest"):printf("c is grest");
    return 0;
    
}
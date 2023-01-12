//wap to enter prices of 3 item & print their final coest with gst

#include<stdio.h>
int main() {
    int price[3]; //creating array
    printf("item 1:");
    scanf("%d",&price[0]);
    printf("item 2:");
    scanf("%d",&price[1]);
    printf("item 3:");
    scanf("%d",&price[2]);

    printf("item 1:%f\nitem 2:%f\nittem 3:%f\n",price[0]+(.18*price[0]),price[1]+(.18*price[1]),price[2]+(.18*price[2]));
    return 0;
    
}

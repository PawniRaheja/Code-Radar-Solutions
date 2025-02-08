#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    printf("&d",num==0?32:
    __buildin_ctz(num));
    return 0;
}
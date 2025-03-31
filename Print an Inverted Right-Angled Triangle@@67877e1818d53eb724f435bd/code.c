// Your code here...
#include <stdio.h>
int main(){
    int r,c,N;
    scanf("%d",&N);

    for(r=1;r<=N;r++){
        for(c=1;c<=6-r;c++){
            printf("*");
        }
        printf("\n");
    }
}
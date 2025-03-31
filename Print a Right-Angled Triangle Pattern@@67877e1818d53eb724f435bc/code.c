// Your code here...
#include <stdio.h>
int main(){
    int N,r,c;
    for(r=1;r<=N;r++){
        for(c=1;c<=r;c++){
            printf("* ");
        }
        printf("\n");
    }
}
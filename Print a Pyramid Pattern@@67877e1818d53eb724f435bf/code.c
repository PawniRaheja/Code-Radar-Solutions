// Your code here...
#include<stdio.h>
int main(){
    int r,c,N;
    scanf("%d",&N);
    for(r=1;r<=N;r++){
        for(c=1;c<=(N-r);c++){
            printf(" ");
        }
    
        for(c=1;c<=2*r-1;c++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
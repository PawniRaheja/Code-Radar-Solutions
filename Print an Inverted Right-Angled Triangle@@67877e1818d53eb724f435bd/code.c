// Your code here...
#include<stdio.h>
int main(){
    int r,c,N,j;
    scanf("%d",&N);
    for(r=1;r<=N;r++){
        j=1;
        for(c=N;c>=r;c--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
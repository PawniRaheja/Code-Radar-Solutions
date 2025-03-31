// Your code here...
#include <stdio.h>
int main(){
    int r,c,N;
    scanf("%d",&N);

    for(r=1;r<=N;r++){
        for(c=N;c>=r;c--){
            printf("* ");
        }
        printf("\n");
    }
}
// Your code here...
// Your code here...
#include<stdio.h>
  int main(){
    int r,c,n;
    scanf("%d",&n);
    for(r=n; r>=1; r--){
        for(c=1; c<=r; c++){
            printf("%c ", 64+c);
        }
        printf("\n");
    }
    return 0;}
// Your code here...
// Your code here...
#include<stdio.h>
  int main(){
    int r,c,n;
    scanf("%d",&n);
    /*for(r=n; r>=1; r--){
        for(c=1; c<=r; c++){
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;*/
    for(r=1;r<=n;r++){
        for(c=n;c>=1;c--){
            printf("%d ",c);
        }
        printf("\n");
    }
    }
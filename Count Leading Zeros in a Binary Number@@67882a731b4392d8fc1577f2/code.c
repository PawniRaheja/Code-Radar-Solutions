#include <stdio.h>

/*int countleadingzeros(int num){
    if (num==0)return 32;

    int count =0;
    for (int i =31;i>=0;i--){
        if((num>>i)&1)
        break;
        count++;
    }
    return count;
}
int main() {
    int num;
    scanf("%d",&num);
    printf("%d\n",countleadingzeros);
    return 0;
}*/
int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",num==0?32:
    __builtin_clz(num));
    return 0;
}
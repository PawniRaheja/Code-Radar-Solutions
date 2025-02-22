// Your code here...
/*#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf("A");
    }
    else if(a>=80&&a<90){
        printf("B");
    }
    else if(a>=70&&a<80){
        printf("c");
    }
    else if(a>=60&&a<70){
        printf("D");
    }
    else if(a<60){
        printf("F");
    }
    else{
        printf("invalid");
    }
    return 0;
}*/
#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("A");
    } else if (marks >= 80) {
        printf("B");
    } else if (marks >= 70) {
        printf("C");
    } else if (marks >= 60) {
        printf("D");
    } else {
        printf("F");
    }

    return 0;
}

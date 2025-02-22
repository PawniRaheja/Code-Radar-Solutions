
#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    
    // Taking input
    scanf("%d %d %c", &num1, &num2, &op);
    
    // Performing the operation based on the operator
    switch(op) {
        case '+': 
            printf("%d", num1 + num2);
            break;
        case '-': 
            printf("%d", num1 - num2);
            break;
        case '*': 
            printf("%d", num1 * num2);
            break;
        case '/': 
            if (num2 == 0)
                printf("error"); // Prevent division by zero
            else
                printf("%d", num1 / num2);
            break;
        default:
            printf("error"); // Invalid operator
    }

    return 0;
}

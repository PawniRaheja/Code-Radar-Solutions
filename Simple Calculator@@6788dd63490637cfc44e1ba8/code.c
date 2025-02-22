
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
            
                printf("%d", num1 / num2);
            break;
        default:
            printf("Error"); // Invalid operator
    }

    return 0;
}

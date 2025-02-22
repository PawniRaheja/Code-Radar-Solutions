// Your code here..
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if it's a digit
    if (isdigit(ch)) {
        printf("Digit");
    }
    // Check if it's an alphabetic character
    else if (isalpha(ch)) {
        // Convert to lowercase to handle both cases
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    }
    // Otherwise, it's a special character
    else {
        printf("Special Character");
    }

    return 0;
}

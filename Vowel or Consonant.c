#include<stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        ch = tolower(ch);
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("VOWEL\n");
        } else {
            printf("CONSONANT\n");
        }
    }
    return 0;
}
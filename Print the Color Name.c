#include <stdio.h>
#include <ctype.h>
int main() {
    char colorCode;
    scanf(" %c", &colorCode);
    colorCode = toupper(colorCode); 

    switch (colorCode) {
        case 'V':
            printf("Violet\n");
            break;
        case 'I':
            printf("Indigo\n");
            break;
        case 'B':
            printf("Blue\n");
            break;
        case 'G':
            printf("Green\n");
            break;
        case 'Y':
            printf("Yellow\n");
            break;
        case 'O':
            printf("Orange\n");
            break;
        case 'R':
            printf("Red\n");
            break;
        default:
            printf("-1\n"); 
    }

    return 0;
}
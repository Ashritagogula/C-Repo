#include <stdio.h>
int main() {
    int physics, chemistry, biology, mathematics, computer_science;
    int total_marks;
    float percentage;
    scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &mathematics, &computer_science);
    total_marks = physics + chemistry + biology + mathematics + computer_science;
    percentage = (float)total_marks / 5;
    if (percentage >= 90) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else if (percentage >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int X, Y, H;
    scanf("%d %d %d", &X, &Y, &H);
    int total_charge;
    if (H == 1) {
        total_charge = X;
    } else {
        total_charge = X + (H - 1) * Y;
    }
    printf("%d\n", total_charge);
    return 0;
}
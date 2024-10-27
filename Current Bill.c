#include <stdio.h>
int main() {
    int units;
    float bill, totalAmount, surcharge;
    scanf("%d", &units);
    if (units < 200) {
        bill = units * 1.20;
    } else if (units >= 200 && units < 400) {
        bill = units * 1.50;
    } else if (units >= 400 && units < 600) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }
    if (bill > 400) {
        surcharge = bill * 0.15;
    } else {
        surcharge = 100.0;
    }
    totalAmount = bill + surcharge;
    printf("%.2f\n", totalAmount);
    return 0;
}
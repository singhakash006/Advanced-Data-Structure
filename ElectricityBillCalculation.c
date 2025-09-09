// A company charges electricity bill as:
// • For first 100 units: ₹5/unit
// • Next 100 units: ₹7/unit
//  • Above 200 units: ₹10/unit

#include <stdio.h>
#include<conio.h>
int main() {
    int units, bill = 0;

    printf("Enter your Electricity units: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }

    printf("Your Electricity bill is Rs %d", bill);

    return 0;
    getch();
}

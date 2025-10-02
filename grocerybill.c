#include <stdio.h>

int main() {
    int n, i;
    char itemName[50];
    float price, total = 0;
    int quantity;

    printf("=== Grocery Store Bill Generator ===\n");
    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("\n--------------------------------------\n");
    printf("%-20s %-10s %-10s\n", "Item", "Qty", "Price");
    printf("--------------------------------------\n");

    for (i = 1; i <= n; i++) {
        printf("Enter name of item %d: ", i);
        scanf("%s", itemName);

        printf("Enter quantity of %s: ", itemName);
        scanf("%d", &quantity);

        printf("Enter price of one %s: ", itemName);
        scanf("%f", &price);

        float itemTotal = price * quantity;
        total += itemTotal;

        printf("%-20s %-10d %-10.2f\n", itemName, quantity, itemTotal);
        printf("--------------------------------------\n");
    }

    printf("\n======================================\n");
    printf("Total Bill: %.2f\n", total);
    printf("======================================\n");

    return 0;
}

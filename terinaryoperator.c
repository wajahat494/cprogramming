#include <stdio.h>

int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    max = (a > b) ? a : b;
    printf("Greater number is: %d\n", max);
    return 0;
}

#include <stdio.h>

int main() {
    int percentage;
    printf("Enter your percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100)
        printf("Grade: A+\n");
    else if (percentage >= 80)
        printf("Grade: A\n");
    else if (percentage >= 70)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 50)
        printf("Grade: D\n");
    else
        printf("Fail\n");

    return 0;
}

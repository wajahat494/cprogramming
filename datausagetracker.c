#include <stdio.h>
int main() {
    int i;
    float data[24]; 
    float total = 0; 
    printf("=== Internet Data Usage Tracker ===\n");
    for (i = 0; i < 24; i++) {
        printf("Enter data used in hour %d (in MB): ", i + 1);
        scanf("%f", &data[i]);
        total += data[i]; 
    }
    printf("\n====================================\n");
    printf("Total data used in a day: %.2f MB\n", total);
    printf("Which is %.2f GB\n", total / 1024);
    printf("====================================\n");
    return 0;
}

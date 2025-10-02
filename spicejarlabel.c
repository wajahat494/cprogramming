#include <stdio.h>
#include <string.h>
int main() {
    int n, i, found = 0;
    char spices[50][50];   
    char search[50];
    printf("=== Spice Jar Label Manager ===\n");
    printf("Enter number of spice jars: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter name of spice jar %d: ", i + 1);
        scanf("%s", spices[i]);
    }
    printf("\nEnter spice name to search: ");
    scanf("%s", search);
    for (i = 0; i < n; i++) {
        if (strcmp(spices[i], search) == 0) {
            printf("\n✅ %s is in jar number %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\n❌ Spice '%s' not found in jars.\n", search);
    }

    return 0;
}

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius = 5;
    float area = PI * radius * radius;

    printf("Area of circle with radius %.2f is: %.2f\n", radius, area);
    return 0;
}

#include <stdio.h>

int findLargest(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[5] = {10, 25, 6, 90, 35};
    int max = findLargest(arr, 5);
    printf("Largest element = %d\n", max);
    return 0;
}

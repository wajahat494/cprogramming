#include <stdio.h>

int findSmallest(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int arr[5] = {10, 25, 6, 90, 35};
    int min = findSmallest(arr, 5);
    printf("Smallest element = %d\n", min);
    return 0;
}

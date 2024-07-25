#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4};
    int sum = 0;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length; i++) {
        sum = sum + numbers[i];
    }

    float avg = (float)sum / length;

    printf("%f\n", avg);

    return 0;
}

#include <stdio.h>

void minMaxSequence(int numbers[], int n) {
    int minSequence[n], maxSequence[n];
    int i, minVal, maxVal;

    minVal = maxVal = numbers[0];
    minSequence[0] = maxSequence[0] = numbers[0];

    for (i = 1; i < n; i++) {
        if (numbers[i] < minVal)
            minVal = numbers[i];
        minSequence[i] = minVal;

        if (numbers[i] > maxVal)
            maxVal = numbers[i];
        maxSequence[i] = maxVal;
    }

    printf("Minimum sequence: ");
    for (i = 0; i < n; i++)
        printf("%d ", minSequence[i]);
    printf("\n");

    printf("Maximum sequence: ");
    for (i = 0; i < n; i++)
        printf("%d ", maxSequence[i]);
    printf("\n");
}

int main() {
    int numbers[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements separated by spaces: ");
    for (i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    minMaxSequence(numbers, n);

    return 0;
}

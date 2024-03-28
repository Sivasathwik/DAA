#include <stdio.h>
int main()
 {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
	 {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
	 {
        if (arr[i] > max)
		 {
            max = arr[i];
            maxIndex = i;
        }
    }

    printf("The largest element in the array is: %d\n", max);
    printf("The index of the largest element is: %d\n", maxIndex);

    return 0;
}

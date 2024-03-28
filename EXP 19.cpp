#include <stdio.h>
void printFibonacci(int n)
 {
    int a = 0, b = 1, c;
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int terms;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);
    printFibonacci(terms);
    return 0;
}

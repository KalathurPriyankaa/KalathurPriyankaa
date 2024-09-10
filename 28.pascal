#include <stdio.h>

void printPascal(int n) {
    for (int line = 1; line <= n; line++) {
        // Print leading spaces for alignment
        for (int k = 0; k < n - line; k++) {
            printf(" ");
        }

        int C = 1; // First element is always 1
        for (int i = 1; i <= line; i++) {
            printf("%d ", C);
            C = C * (line - i) / i;
        }
        printf("\n");
    }
}

int main() {
	 printf("K.priyanka(192210196)\n");
    int n;
    printf("Enter the number of lines for Pascal's Triangle: ");
    scanf("%d", &n);
    printPascal(n);
    return 0;
}

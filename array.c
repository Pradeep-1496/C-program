#include <stdio.h>

int main() {
    int i, n;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {

        // %1d reads a single digit
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

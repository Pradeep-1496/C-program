#include <stdio.h>
#include <conio.h>

int main()
{
    // Input Array
    int n, i;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Algorithm 
    for(i=1; i<n; i++)
    {
        int temp = a[i];
        int j = i-1;
        while (j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    // Print Array
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

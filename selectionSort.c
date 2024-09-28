#include <stdio.h>
#include <conio.h>
int main()
{
    // Input Array
    int i, n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Algorithm
    for (i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++){
            if(a[min] > a[j]){
             min = j;   
            }
        }
        // swap
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    // Print array
    printf("Sorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
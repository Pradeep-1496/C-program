#include <stdio.h>
#include <conio.h>
int main()
{
    int a[]= {10, 8, 9, 11, 2, 5};
    int temp;
    int n = sizeof(a) / sizeof(a[0]);
    // Print original Array
    for (int i = 0; i < n; i++){
    printf("%d ", a[i]); 
    }
    printf(" (Original Array)\n");
    // Algo
    for(int j=0; j<n-1; j++){
        for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1]){
            // swap
            temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
            }
             // Print Sorted Array
        for (int i = 0; i < n; i++){
        printf("%d ", a[i]); 
        }
        printf("\n");
    }
    }
    return 0;
}                                                                                                              
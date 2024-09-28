// problem : https://leetcode.com/problems/two-sum/  (ctrl +  click)

#include <stdio.h>
#include <conio.h>

int main()
{
    // Input array
    int n, i, j, t;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // target input
    printf("\nTarget : ");
    scanf("%d", &t);
    // Print array
    for (i = 0; i < n; i++){
    printf("%d  ", a[i]); // add %d
    }
    // algo 
    for(i= 0; i<n; i++){
        for(j=0; j<n; j++){
            int sum = a[i] + a[j];
            if(sum == t){
                printf("\n%d, %d ", a[i], a[j]);
            }
        }
    }
}

#include <stdio.h>
#include <conio.h>

int main()
{
     int n, i, ie1, ie2;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nArray is: ");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    int r = n%2;
    if (r == 0){
        ie1 = n/2;
        ie2 = ie1-1;
        printf("\n\nMiddle of Array is %d  &  %d", a[ie2], a[ie1]);
    }
    else{
        i = n/2;
    printf("\n\nMiddle of Array is : %d", a[i]);
    }
}


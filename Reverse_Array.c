// reverse array
#include <stdio.h>
#include <conio.h>

int main()
{
    //Define and input array
    int a[] = {10, 8, 9, 11, 7, 2, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int i = n - 1;
    int l = 0, r = i, temp;
    printf("\nOriginal array : ");
    for (i = 0; i < n; i++){
    printf("%d  ", a[i]); 
    }
    // algo
    while(l != r){
        temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
        if(l>r){
            break;
        }
    }
    // Output Print
    printf("\n\nReverse Array : ");
    for (i = 0; i < n; i++){
    printf("%d  ", a[i]); 
    }
}
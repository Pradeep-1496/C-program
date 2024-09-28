#include <stdio.h>
#include <conio.h>

int BubbleSort(int a[], int n){
    int temp;
    for(int j=0; j<n-1; j++){
        for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1]){
            temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
            }
            printf("%d%d: ", j, i);
        for (int i = 0; i < n; i++){
        printf("%d ", a[i]); 
        }
        printf("\n");
    }
    }
    
}

int Remove(int a[], int n){
    int j, i;
    // Algo
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i] == a[j] ){
                for(int d=j; d<n; d++){
                    a[d]=a[d+1];
                }
                --n;
            }
        }
    }

    // Print Array
    for (i = 0; i<n; i++){
    printf("%d ",a[i]);
    }
    printf(" (dublicate remove)");
}

int main()
{
    int a[]= {10, 8, 9, 11, 2, 5, 4, 12, 4, 5, 3};
    int temp;
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]); 
    }
    printf(" (Original Array)\n");
    BubbleSort(a, n);
    Remove(a, n);
}
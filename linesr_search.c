#include <stdio.h>
int main(){
    int i, n, data;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nSearch Element: ");
    scanf("%d", &data);
    for(int i = 0; i <= n-1; i++){
        if(a[i] == data){
            printf("Element is present at index %d", i);
            break;
        }
        else if (i == n-1){
            printf("\nElement not found ");
        }
    }
}
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[]= {0, 1, 2, 3, 4, 5, 8, 9};   
    int target;
    printf("Search value : ");
    scanf("%d", &target);
    int n = sizeof(a) / sizeof(a[0]);
    int l, r;
    l=0, r=n-1;
    for(int i=0; i<n; i++){
        int mid=((l+r)/2);
        if(target == a[mid]){
            printf("Element Found on index %d ", mid);
            break;
        }
        else if (target > a[mid]){
            l=mid + 1;
        }
        else{
            r=mid - 1;
        }
    }
    return 0;
}

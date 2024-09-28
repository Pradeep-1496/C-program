#include <stdio.h>
#include <conio.h>

int main()
{
    int a[] = {10, 8, 9, 11, 7, 6, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    //printf("%d", n);
    int t1=9, t2=2;
    int i1, i2;
    for(int i=0; i<n; i++){
        if(t1 == a[i]){
            i1= i;
        }
        else if(t2 == a[i]){
            i2= i;
        }
    }
    printf("Distance between %d & %d is %d ",t1 , t2, (i2-i1));
    return 0;
}
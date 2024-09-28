#include <stdio.h>
#include <conio.h>

int main()
{
    int a[] = {10, 8, 11, 9};
    int n = sizeof(a) / sizeof(a[0]);
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j] > a[j+1]){
                a[j] = a[j]+a[j+1];  // swap without 3rd varible
                a[j+1] = a[j]-a[j+1];
                a[j] = a[j]-a[j+1];
            }
        }
    }
    for (int i = 0; i < n; i++){
    printf("%d  ", a[i]); 
    }
}
/* 
swap a & b
a = a + b;
b = a - b;
a = a - b;   
*/
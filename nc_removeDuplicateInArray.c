#include <stdio.h>
#include <conio.h>

int main()
{
    int a[] = {0,0,1,1,2,2,2,3,1,3,4};
    int n=sizeof(a)/sizeof(a[0]);
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
    printf("%d  ", a[i]); // add %d
    }
    return 0;
}


#include <stdio.h>
#include <conio.h>

void series(int n){
    int a1, a2, a3, count;
    a1=0, a2=1, count=2;
    printf("%d %d ", a1, a2);
    for(int i=0; i<n; i++){
    a3 = a1 + a2;
    printf("%d ", a3);
    a1=a2;
    a2=a3;
    count++;
    if(count==10){
        printf("\n");
        count=0;
    }
    }
}

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    n=n-2;
    series(n);
    return 0;
}
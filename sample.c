#include <stdio.h>

int main() {
  int i,n,j;
printf("Value of i:");
scanf("%d", &i);
  for (n = 0; n <= i; n=n+3) { //n is multiple of 3
    printf("Outter: %d\n", n);
    for (j = 2; j <= i; j=j+2){
         printf("inner: %d\n", j);
    }

  }

  return 0;
}

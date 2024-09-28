// Problem link : https://leetcode.com/problems/add-two-numbers

#include <stdio.h>
#include <conio.h>

int main()
{
    int L;
    int a[]={1, 2, 3, 5};
    int b[]={4, 5, 6, 7, 54};
    int na = sizeof(a) / sizeof(a[0]);
    int nb = sizeof(b) / sizeof(b[0]);
    if(na>=nb){
        L=nb;
    }
    else{
        L=na;
    }
    int c[L];
    for(int i=0; i<L; i++){
        c[i]=a[i]+b[i];
        }
        //print
        for (int i = 0; i < L; i++){
        printf("%d  ", c[i]); 
        }
        return 0;
}
// Problem link : https://leetcode.com/problems/container-with-most-water

#include <stdio.h>
#include <conio.h>
int Distance(int a[], int l, int r, int n){
     int t1=l;
     int t2=r;
    int i1, i2;
    for(int i=0; i<n; i++){
        if(t1 == a[i]){
            i1 = i;
            break;
        }
    }
    for(int j=i1+1; j<n; j++){
        if(t2 == a[j]){
            i2 = j;
        }
    }
    int base = (i2-i1);
    int hight;
    if(l>r){
        hight = r;
    }
    else if(r>l) {
        hight = l;
    }
    else{
        hight = l;
    }
    printf("\nMost Water Hold in %d & %d is %d", l, r, (base*hight));
}
int main()
{
    int n;
    printf("ENTER SIZE OF ARRAY: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int last = n-1;
    int l, r;
    if(a[0]>a[1] && a[0]>a[2]){
        l = a[0];
    }
    else if (a[1]>a[0] && a[1]>a[2]){
        l = a[1];
    }
    else if (a[2]>a[0] && a[2]>a[1])
    {
        l = a[2];
    }

    if(a[last]>a[last-1] && a[last]>a[last-2]){
        r = a[last];
    }
    else if(a[last-1]>a[last] && a[last-1]>a[last-2]){
        r = a[last-1];
    }
    else{
        r = a[last-2];
    }
    Distance(a, l, r, n);
    return 0;
}
// 1 8 6 2 5 4 8 3 7
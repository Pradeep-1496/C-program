#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    int o;
    for (int i = 2; i < a; i++)
    {
        o = a % i;
        if (o == 0)
        {
            printf("\ndivide with %d - Yes", i);
        }
        else
        {
            printf("\ndivide with %d - NO", i);
        }
    }
    return 0;
}
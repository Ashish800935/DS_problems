#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        printf("\n");
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int size;

    printf("삼각형의 크기: ");
    scanf("%d", &size);

    for(int n=size; n>=1; n--)
    {
        for(int j=1; j<=n; j++)
        {
        for(int i=1; i<n; i++ )
        {
           printf(" ");
        }
        printf("*");
        }

        printf("\n");
    }

    return 0;
}
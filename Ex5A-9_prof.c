#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("삼각형의 크기: ");
    scanf("%d", &size);

    int n;
    for(n=1; n<=size; n++)
    {
        int i;
        for(i=1; i<=n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
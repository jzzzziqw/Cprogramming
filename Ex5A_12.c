#include <stdio.h>

int main()
{
    int size;

    printf("»ï°¢ÇüÀÇ Å©±â: ");
    scanf("%d", &size);

    for(int n=size; n>=1; n--)
    {
        for(int i=1; i<=size-n; i++ )//size-n¸¸Å­ÀÇ ºóÄ­ Ãâ·Â
        {
           printf(" ");
        }
        for(int i=1; i<=n; i++)
        {
        printf("*");
        }

        printf("\n");
    }

    return 0;
}
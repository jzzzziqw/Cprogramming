#include <stdio.h>

int main()
{
    int size;

    printf("?ﰢ???? ũ??: ");
    scanf("%d", &size);

    for(int n=1; n<=size; n++)
    {
        for(int i=1; i<=size-n; i++ )//size-n??ŭ?? ??ĭ ????
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
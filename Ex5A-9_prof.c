#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("�ﰢ���� ũ��: ");
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
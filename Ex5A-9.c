#include <stdio.h>

int main()
{
    int size;

    printf("�����ﰢ���� ũ�⸦ �Է��ϼ���: ");
    scanf("%d", &size);
    printf("%d", size);

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i>=j)
            
            printf("*");
        }

        printf("\n");

    }

    return 0;
    
    
}
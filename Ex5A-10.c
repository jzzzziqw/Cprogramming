/* #include <stdio.h>

int main()
{
    int size;

    printf("�����ﰢ���� ũ�⸦ �Է��ϼ���: ");
    scanf("%d", &size);

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i<=j) //if���� �ᵵ ������ �� ������ �ڵ尡 ��������
            
            printf("*");
        }

        printf("\n");

    }

    return 0;
    
    
}

*/

#include <stdio.h>
int main()
{
    int size;

    printf("�ﰢ���� ũ��: ");
    scanf("%d", &size);

    int n;
    for(n=size; n>=1; n--)
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
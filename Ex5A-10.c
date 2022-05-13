/* #include <stdio.h>

int main()
{
    int size;

    printf("직각삼각형의 크기를 입력하세요: ");
    scanf("%d", &size);

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i<=j) //if문을 써도 문제될 건 없으나 코드가 복잡해짐
            
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

    printf("삼각형의 크기: ");
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
#include <stdio.h>

int main()
{
    int size;

    printf("직각삼각형의 크기를 입력하세요: ");
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
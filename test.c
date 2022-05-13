#include <stdio.h>

int main()
{
    float a;

    printf("실수를 입력하세요: ");
    scanf("%f", &a);

    printf("%f", a);
    printf("\n");
    printf("%g", a);
    
    return 0;
}
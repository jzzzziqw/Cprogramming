#include <stdio.h>

int main()
{
    float a;

    printf("실수를 입력하세요: ");
    scanf("%f", &a);

    printf("%f", a); //부동소수점 표기방식
    printf("\n");
    printf("%g", a);//부동소수점과 지수 표기 방식 중 간단한 형식으로 출력
    
    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("정수를 10진수로 입력하세요: ");
    scanf("%d", &a);
    printf("10진수: %d, 8진수: %o, 16진수: %x\n\n", a, a, a);

    printf("정수를 16진수로 입력하세요: ");
    scanf("%x", &b);
    printf("10진수: %d, 8진수: %o, 16진수: %x\n\n", b, b, b);

    printf("정수를 8진수로 입력하세요: ");
    scanf("%o", &c);
    printf("10진수: %d, 8진수: %o, 16진수: %x", c, c, c);    
    
    return 0;
}
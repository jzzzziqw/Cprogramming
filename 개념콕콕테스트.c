#include <stdio.h>

int main()
{
    int a, b, c;

    printf("������ 10������ �Է��ϼ���: ");
    scanf("%d", &a);
    printf("10����: %d, 8����: %o, 16����: %x\n\n", a, a, a);

    printf("������ 16������ �Է��ϼ���: ");
    scanf("%x", &b);
    printf("10����: %d, 8����: %o, 16����: %x\n\n", b, b, b);

    printf("������ 8������ �Է��ϼ���: ");
    scanf("%o", &c);
    printf("10����: %d, 8����: %o, 16����: %x", c, c, c);    
    
    return 0;
}
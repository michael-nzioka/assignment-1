#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("enter first value:");
    scanf("%d" , &a);
    printf("enter second value:");
    scanf("%d" , &b);
    c = a + b;
    printf("%d + %d = %d\n" , a, b, c);
    return 0;
}

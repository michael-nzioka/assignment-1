#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("enter first value:");
    scanf("%d" , &a);
    printf("enter second value:");
    scanf("%d" , &b);
    printf("enter third value:");
    scanf("%d" , &c);
    d = a + b + c;
    printf("%d + %d + %d = %d\n" , a, b, c, d);
    return 0;
}

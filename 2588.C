//2588. 곱셈

#include <stdio.h>

int main(){

    int a, b, num1, num2, num3;

    scanf("%d", &a, sizeof(a));
    scanf("%d", &b, sizeof(b));

    num1 = b / 100;
    num2 = (b / 10) % 10;
    num3 = b % 10;

    printf("%d\n", a * num3);
    printf("%d\n", a * num2);
    printf("%d\n", a * num1);
    printf("%d", a * b);

    return 0;
}
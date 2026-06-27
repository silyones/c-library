#include <stdio.h>
#include "mylib.h"

int main()
{
    int x, y;

    printf("enter 2 numbers");
    scanf("%d %d", &x, &y);

    printf("Addition = %d\n", add(x, y));
    printf("Subtraction = %d\n", sub(x, y));
    printf("Multiplication = %d\n", mul(x, y));
    printf("Divivision = %f\n", div(x, y));

    return 0;

}
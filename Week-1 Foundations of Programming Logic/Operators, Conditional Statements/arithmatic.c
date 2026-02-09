#include<stdio.h>
int main()
{
    int a = 20, b = 10;
    
    int add = a + b;
    printf("Addition of a and b is: %d\n", add);

    int sub = a - b;
    printf("Subtraction of a and b is: %d\n", sub);

    int mul = a * b;
    printf("Multiplication of a and b is: %d\n", mul);

    int div = a / b;
    printf("Division of a and b is: %d\n", div);

    int mod = a % b;
    printf("Modulus of a and b is: %d\n", mod);
    return 0;
}
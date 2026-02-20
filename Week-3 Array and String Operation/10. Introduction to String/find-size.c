#include<stdio.h>
int main()
{
    // size of an int
    printf("%d\n", sizeof(int));

    // size of an array
    int ar[5];
    printf("%d\n", sizeof(ar));

    // size of that array
    int sz = sizeof(ar) / sizeof(int);
    printf("%d\n", sz);

    // size of a char
    printf("%d\n", sizeof(char));

    // size of an character array
    char name[] = "shafiq";
    printf("%d", sizeof(name));

    return 0;
}
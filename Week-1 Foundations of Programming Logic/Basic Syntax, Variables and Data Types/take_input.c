#include<stdio.h>
int main()
{
    int steve, smith;
    scanf("%d %d", &steve, &smith);
    printf("%d %d\n", steve, smith);

    float fl;
    scanf("%f", &fl);
    printf("%0.2f\n", fl);

    char c;
    scanf(" %c", &c);
    printf("%c", c);
    return 0;
}
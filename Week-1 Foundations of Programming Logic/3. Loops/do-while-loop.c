#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i = 100;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i <= n);
    
    return 0;
}
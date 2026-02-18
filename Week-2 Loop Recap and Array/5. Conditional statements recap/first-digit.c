#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int number = x / 1000;

    if(number%2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);

    if(taka >= 100){
        printf("Money is %d and I will eat.", taka);
    }else{
        printf("Money is %d and No Food.", taka);
    }

    return 0;
}
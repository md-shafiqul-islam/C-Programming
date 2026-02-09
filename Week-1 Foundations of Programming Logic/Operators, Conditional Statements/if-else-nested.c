#include<stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);

    if(taka >= 5000){
        printf("Cox's Bazar Visit.\n");

        if(taka >= 10000){
            printf("Saint-Martin Visit.\n");
        }
        else{
            printf("Only Visit Cox's Bazar & Return.\n");
        }
    }
    else{
        printf("Going nowhere.");
    }

    return 0;
}
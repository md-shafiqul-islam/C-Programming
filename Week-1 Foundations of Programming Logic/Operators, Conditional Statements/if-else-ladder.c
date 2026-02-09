#include<stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);

    if(taka >= 100){
        printf("Eat burger");
    }else if(taka >= 50){
        printf("Eat fuchka");
    }else{
        printf("Eat Nothing");
    }
    
    return 0;
}
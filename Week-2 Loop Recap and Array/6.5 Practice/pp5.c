#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int right = n % 10;
    int left = n / 10;

    if(right % left == 0 || left % right == 0){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}
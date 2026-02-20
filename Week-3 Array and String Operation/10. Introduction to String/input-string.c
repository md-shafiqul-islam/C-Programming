#include<stdio.h>
int main()
{
    //* normal style
    // char a[6];

    // for(int i=0; i<6; i++){
    //     scanf("%c", &a[i]);
    // }

    // for(int i=0; i<6; i++){
    //     printf("%c", a[i]);
    // }

    //* string style
    char a[6];
    scanf("%s", &a);
    printf("%s", a);

    return 0;
}
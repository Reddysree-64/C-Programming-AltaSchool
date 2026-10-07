#include <stdio.h>
int main(void)
{
    int x,y;
    int average;

    printf("give some value for x : \n");
    scanf("%d", &x);

    printf("give some value for y : \n");
    scanf("%d", &y);

    average =(x + y) / 2;

    printf("The average of %d and %d is :%d/n", x,y,average);

    return 0;
}

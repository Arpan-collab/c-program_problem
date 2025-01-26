// Find Sum Of First n Natural Numbers in O(1)3

#include <stdio.h>

int main()

{
    int num;
    int sum = 0;

    printf("enter the last natural number you want to sum\n");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    printf("last natural number your wanted to sum that is  %d", sum);

    return 0;
}
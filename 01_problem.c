
//  Generate Multiplication Table of a Given Number

#include <stdio.h>
int main()
{
    int number;
    printf("give the number\n");
    scanf("%d", &number);

    printf("%d multiplication table is\n", number);
    for (int i = 0; i < 10; i++)
    {
        int multiplication = (number * (i + 1));

        printf("%d x %d = %d\n", number, i + 1, multiplication);
    }

    return 0;
}
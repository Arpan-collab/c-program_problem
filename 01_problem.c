
//  Generate Multiplication Table of a Given Number

#include <stdio.h>
int main()
{
    int number;
    printf("give the number\n");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        int multiplication = (number * i);
        
        printf("%d x %d = %d\n", number, i, multiplication);
    }

    return 0;
}
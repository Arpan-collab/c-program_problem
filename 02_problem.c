// Find Sum Of First n Natural Numbers in O(1)3

#include <stdio.h>

int main()

{
    int num;
    int sum = 0;

    printf("enter the last natural number you want to sum\n");
    scanf("%d", &num);
    // in this for loop if i give a big number it will take many times bez it will run many times program can be hang. 
    // it s linear system 
    // for (int i = 0; i <= num; i++)
    // {
    //     sum += i;
    // }

    // shortcut way and very first than for loop program 
    
    sum = (num * num + num) / 2; // sutro diye kora hoise akane
    printf("last natural number your wanted to sum that is  %d", sum);

    return 0;
}
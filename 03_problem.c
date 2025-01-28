// Find Largest Element in an Array

#include <stdio.h>

int returnmax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int arr[] = {2, 10, 145, 85, 54, 696};
    int max = returnmax(arr, 6);
    printf("the maximum number is %d", max);
    return 0;
}
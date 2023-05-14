#include <stdio.h>
int main()
{
    int n, minimum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter your array: ");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    minimum = arr[0];

    for (int j = 0; j < n; j++)
    {
        if (arr[j] < minimum)
        {
            minimum = arr[j];
        }
    }
    printf("\nMinimum value of that array is : %d", minimum);

    return 0;
}
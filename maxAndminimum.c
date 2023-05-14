#include <stdio.h>
int main()
{
    int n, minimum, maximum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter your array: ");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    maximum = arr[0];
    for (int k = 0; k < n; k++)
    {
        if (arr[k]>maximum) 
        {
            maximum = arr[k];
        }
        
    }
    
    minimum = arr[0];

    for (int j = 0; j < n; j++)
    {
        if (arr[j] < minimum)
        {
            minimum = arr[j];
        }
    }

    printf("\nThe maximum value of that array is : %d \nThe Minimum value of that array is : %d",maximum, minimum);

    return 0;
}
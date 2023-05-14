#include <stdio.h>
int main()
{
    int n, sum= 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter your array: ");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        sum +=arr[j];
    }
    printf("The sum of the array is: %d", sum);
    
    return 0;
}
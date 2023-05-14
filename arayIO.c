#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many array your want to input: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter your array: ");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    printf("\nYour array is:\n\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ",arr[j]);
    }
    
    
    

    return 0;
}
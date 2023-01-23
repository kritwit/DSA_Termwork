#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("The original array: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    int i, j, min_index, temp, comparisons = 0, swaps = 0;
    for (i = 0; i < n-1; i++) {
        min_index = i;
        for (j = i+1; j < n; j++) {
            
            comparisons++;
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
        swaps++;
    }
    
    printf("\nThe sorted array: ");
    for( i=0;i<n;i++)
        printf("%d ",arr[i]);
        
    printf("\nNo.of comparisons: %d\n",comparisons);
    printf("No.of swaps: %d\n",swaps);
}

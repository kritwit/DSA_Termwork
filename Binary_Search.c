#include<stdio.h>

int binary_search(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n,i,key,found;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&key);
    
    found = binary_search(arr,n,key);
    if(found == -1)
        printf("Key not found");
    else
        printf("Key found at : %d",found+1);
}

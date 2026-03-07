#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    // Continue looping as long as the search space is valid
    while (low <= high)
    {
        // Calculate the middle index (to avoid potential overflow with (low + high) / 2)
        int mid = low + high / 2;

        // If the target is found at the middle, return the index
        if (arr[mid] == target)
        {
            return mid;
        }
        // If the target is greater than the middle element, ignore the left half
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        // If the target is smaller than the middle element, ignore the right half
        else
        {
            high = mid - 1;
        }
    }

    // If the loop finishes and the element is not found, return -1
    return -1;
}

int main()
{
    // The array must be sorted for binary search to work correctly
    int numbers[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int target = 23;
    // Calculate the size of the array
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Call the binary search function
    int index = binarySearch(numbers, n, target);

    // Print the result
    if (index != -1)
    {
        printf("Element found at index: %d \n", index);
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    // Example of an unsuccessful search
    target = 50;
    index = binarySearch(numbers, n, target);
    if (index != -1)
    {
        printf("Element found at index: %d\n", index);
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}

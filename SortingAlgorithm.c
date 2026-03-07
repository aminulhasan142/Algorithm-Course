#include <stdio.h>

// Bubble Sort Algorithm
void bubble_sort(int arr[], int n)
{
    int i, j, temp, count = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                count++;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Loop count: %d\n", count);
}

// selection sort Algorithm

void selection_sort(int arr[], int n)
{
    int i, j, index_min, temp;
    for (i = 0; i < n - 1; i++)
    {
        index_min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index_min])
            {
                index_min = j;
            }
        }
        if (arr[i] != arr[index_min])
        {
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
}

// insertion sort Algorithm

void insertion_sort(int arr[], int n)
{
    int i, j, item;
    for (i = 1; i < n; i++)
    {
        item = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > item)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = item;
    }
}

// printing Array function
void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int A[] = {10, 8, 2, 89, 30, 53, 19, 1};
    int elements_Array = sizeof(A) / sizeof(A[0]);

    printArray(A, elements_Array);
    insertion_sort(A, elements_Array);
    printArray(A, elements_Array);
}
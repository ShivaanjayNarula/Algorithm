#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int SIZE_THRESHOLD = 16;

void insertionSort(int arr[], int left, int right)
{
    for(int i = left + 1; i <= right; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= left && arr[j] > key)
        {
            arr[j + 1] = arr[j--];
        }
        arr[j + 1] = key;
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void heapify(int arr[], int n, int i, int offset = 0)
{
    int largest = i;
    int l = 2 * i + 1, r = 2 * i + 2;

    if(l < n && arr[offset + l] > arr[offset + largest])
    {
        largest = l;
    }
    if(r < n && arr[offset + r] > arr[offset + largest])
    {
        largest = r;
    }

    if(largest != i)
    {
        swap(arr[offset + i], arr[offset + largest]);
        heapify(arr, n, largest, offset);
    }
}

void heapSort(int arr[], int start, int end)
{
    int n = end - start + 1;
    for(int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i, start);
    }
    for(int i = n - 1; i > 0; i--)
    {
        swap(arr[start], arr[start + i]);
        heapify(arr, i, 0, start);
    }
}

void introsortUtil(int arr[], int begin, int end, int depthLimit)
{
    int size = end - begin + 1;

    if(size < SIZE_THRESHOLD)
    {
        insertionSort(arr, begin, end);
        return;
    }

    if(depthLimit == 0)
    {
        heapSort(arr, begin, end);
        return;
    }

    int pivot = partition(arr, begin, end);
    introsortUtil(arr, begin, pivot - 1, depthLimit - 1);
    introsortUtil(arr, pivot + 1, end, depthLimit - 1);
}

void introSort(int arr[], int n)
{
    int depthLimit = 2 * log(n);
    introsortUtil(arr, 0, n - 1, depthLimit);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5, 3, 2, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    introSort(arr, n);
    printArray(arr, n);

    return 0;
}

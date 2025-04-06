#include <iostream>
#include <vector>
using namespace std;

int getMax(int arr[], int n)
{
    int mx = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    return mx;
}

void countSort(int arr[], int n, int exp)
{
    int output[n];
    int count[10] = {0};

    for(int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }

    for(int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    for(int i = n - 1; i >= 0; i--)
    {
        int idx = (arr[i] / exp) % 10;
        output[count[idx] - 1] = arr[i];
        count[idx]--;
    }

    for(int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n)
{
    int max_val = getMax(arr, n);

    for(int exp = 1; max_val / exp > 0; exp *= 10)
    {
        countSort(arr, n, exp);
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixSort(arr, n);
    printArray(arr, n);
    return 0;
}

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}

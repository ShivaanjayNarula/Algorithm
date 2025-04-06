#include <iostream>
#include <vector>
using namespace std;

void countingSort(int arr[], int n)
{
    int max_val = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max_val)
        {
            max_val = arr[i];
        }
    }
    
    vector<int> count(max_val + 1, 0);
    
    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    int index = 0;
    for(int i = 0; i <= max_val; i++)
    {
        while(count[i]--)
        {
            arr[index++] = i;
        }
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
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    countingSort(arr, n);
    printArray(arr, n);
    return 0;
}

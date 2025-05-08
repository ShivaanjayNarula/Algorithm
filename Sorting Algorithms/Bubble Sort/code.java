import java.util.*;

public class BubbleSortExample
{
  static void bubbleSort(int[] arr)
  {
        int n = arr.length;
        for(int i = 0; i < n - 1; i++)
        {
            boolean swapped = false;
            for(int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1]) {
                    // swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if(!swapped)
            {
                break;
            }
        }
    }

  static void printArray(int[] arr)
  {
        for(int value : arr)
        {
            System.out.print(value + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        bubbleSort(arr);
        printArray(arr);
    }
}

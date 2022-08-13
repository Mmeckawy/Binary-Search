#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int x, int size) {

    int min, temp, first, last;
    //Sort the Array
    for (int i = 0; i <size; i++)
        {
            for (int j = 0; j < size - 1; j++)
                if (array[j] > array[j+1])
                {
                   temp = array[j];
                   array[j] = array[j+1];
                   array[j+1] = temp;
                }
        }

    //Binary Search Algorithm
    first = array[0];
    last = array[size - 1];
    while (first <= last) {
      int mid = first + (last - first) / 2;

      if (array[mid] == x)
        return mid;

      else if (array[mid] < x)
        first = mid + 1;
      else
        last = mid - 1;
  }

  return -1;
}

int main() {

  int arr[5], num;
  printf("Enter array: ");

  for(int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

  printf("Enter number to look for: ");
  scanf("%d", &num);

  int result = binarySearch(arr,num, 5);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);

  return 0;
}

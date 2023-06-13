#include <iostream>
using namespace std;
int pivotElement(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int searchInSortedRotatedArray(int arr[], int n, int key)
{
    int pivot = pivotElement(arr, n);
  if (key >= arr[pivot] && key <= arr[n - 1]) {
    int s = pivot, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e) {
      if (arr[mid] == key) {
        return mid;
      } else if (key < arr[mid]) {
        e = mid - 1;
      } else {
        s = mid + 1;
      }
      mid = s + (e - s) / 2;
    }
    return -1;

  } else {
    int s = 0, e = pivot - 1;
    int mid = s + (e - s) / 2;
    while (s <= e) {
      if (arr[mid] == key) {
        return mid;
      } else if (key < arr[mid]) {
        e = mid - 1;
      } else {
        s = mid + 1;
      }
      mid = s + (e - s) / 2;
    }
    return -1;
  }
}
int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    cout << searchInSortedRotatedArray(arr, 5, 2);
    return 0;
}
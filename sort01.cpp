#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void readArray(int arr[], int size)
{
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void sort01(int arr[], int size)
{
    int s = 0, e = size - 1;
    while (s < e)
    {
        while (arr[s] == 0 && s < e)
        {
            s++;
        }
        while (arr[e] == 1 && s < e)
        {
            e--;
        }
        if (s < e)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }

}
int main()
{
    int arr[100];
    int size;
    cout << "Enter the size:" << endl;
    cin >> size;
    readArray(arr, size);
    printArray(arr, size);
    sort01(arr, size);
    cout << endl;
    printArray(arr, size);

    return 0;
}
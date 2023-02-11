#include <iostream>
using namespace std;
void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int cur = arr[i];
        int j = i - 1;
        while (arr[j] > cur && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = cur;
    }
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the values in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
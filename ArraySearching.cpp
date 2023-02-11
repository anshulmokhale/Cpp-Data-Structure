#include <iostream>
using namespace std;
// int SimpleSearch(int arr[], int size, int value)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == value)
//         {
//             return i + 1;
//         }
//     }
//     return 0;
// }
int BinarySearch(int arr[], int size, int val)
{
    int mid;
    int s = 0;
    int e = size;
    while (s <= e)
    {
        mid = (s + e )/ 2;
        if (arr[mid] == val)
        {
            return mid+1;
        }
        else if (arr[mid] > val)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return 0;
}
int main()
{
    int n, v;
    cout << "enter the size of the array";
    cin >> n;
    int arr[n];
    cout << "ente the value of in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the value which you want to search" << endl;
    cin >> v;
    // int res = SimpleSearch(arr, n, v);
    int res = BinarySearch(arr, n, v);
    if (res == 0)
    {
        cout << "the value is not in array" << endl;
    }
    else
    {
        cout << "the value is founded and is at " << res << " position" << endl;
    }
    return 0;
}
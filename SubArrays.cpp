#include <iostream>
#include <climits>
using namespace std;
// void subArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i; j < size; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }
// }
// int subArray(int arr[], int size)
// {
//     int maxSum = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i; j < size; j++)
//         {
//             int sum = 0;

//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             maxSum = max(maxSum, sum);
//         }
//         return maxSum;
//     }
// }
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the value in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // subArray(arr, n);
    // int val = subArray(arr, n);
    // cout << val;
    return 0;
}
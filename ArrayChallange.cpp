#include <iostream>
using namespace std;
void maxi(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cout << max << " ";
        }
        else
        {
            cout << max << " ";
        }
    }
    // return max;
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the values in the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int val = maxi(arr, n);
    maxi(arr, n);
    // cout << val << endl;
    return 0;
}
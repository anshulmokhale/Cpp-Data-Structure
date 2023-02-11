#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "enter the value of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
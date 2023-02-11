#include <iostream>
using namespace std;
int main()
{
    int n1, m1, n2, m2;
    cout << "enter the size of the array: ";
    cin >> n1 >> m1;
    int arr[n1][m1];
    cout << "enter the arrays: ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter the size of the array: ";
    cin >> n2 >> m2;
    int arr[n2][m2];
    cout << "enter the arrays: ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> arr[i][j];
        }
    }
}
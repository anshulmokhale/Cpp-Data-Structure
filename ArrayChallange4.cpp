#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int val;
    cout << "enter the value: ";
    cin >> val;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == val)
                cout << "the position is "
                     << "[" << i + 1 << "][" << j + 1 << "]";
        }
    }
    return 0;
}
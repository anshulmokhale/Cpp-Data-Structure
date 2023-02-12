#include <iostream>
using namespace std;
int main()
{
    // int s = 20;
    // char var[s];
    // cin >> var;
    // int i = 0;
    // while (var[i] != '\0')
    // {
    //     cout << var[i] << endl;
    //     i++;
    // }
    // palindrome number
    int n;
    cin >> n;
    char var[n + 1];
    cin >> var;
    int i;
    bool check = 1;
    for (i = 0; i < n; i++)
    {
        if (var[i] != var[n - 1 - i])
        {
            check = 0;
        }
    }
    cout << check << endl;
    return 0;
}
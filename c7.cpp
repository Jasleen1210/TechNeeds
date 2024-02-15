#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers do you wanna input?";
    cin >> n;
    int arr[n];
    cout << "Enter array";
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    for (int j = 0; j <= n; j++)
    {
        int present = 0;
        for (int i = 0; i < n; i++)
        {
            if (j == arr[i])
            {
                present = 1;
            }
        }
        if (present == 0)
        {
            cout << "\nMissing number is " << j;
        }
    }
}
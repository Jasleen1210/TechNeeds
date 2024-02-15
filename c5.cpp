#include <iostream>
using namespace std;
int zerotoend(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] != 0)
            {
                arr[i] = arr[j];
                if (i != j)
                {
                    arr[j] = 0;
                }
                break;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Size of array?";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    zerotoend(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;
int min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cout<<"Size of array?";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the array";
    // array input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mini = min(arr, n);
    int maxi = max(arr, n);
    cout << "minimum and maximum elements of array are " << mini << " and " << maxi << endl;
}

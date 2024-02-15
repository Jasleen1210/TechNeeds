#include <iostream>
using namespace std;
int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
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
    cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = max(arr, n);
    cout << x;
    return 0;
}
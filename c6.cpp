#include <iostream>
using namespace std;
int search(int n, int num, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, num;
    cout << "Size of array?";
    cin >> n;
    int arr[n];
    cout << "elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target";
    cin >> num;
    int x = search(n, num, arr);
    cout << x;
    return 0;
}
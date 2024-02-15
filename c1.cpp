#include <iostream>
using namespace std;
// peakElement() which takes the array arr[] and its size n as input parameters and return the index of the peak element.
int peakElement(int arr[3])
{
    int peak = arr[0], peakindex = 0;
    for (int i = 0; i < 3; i++)
    {
        if (peak < arr[i])
        {
            peak = arr[i];
            peakindex = i;
        }
    }
    return peakindex;
}
int main()
{
    int arr[3] = {1, 2, 3};
    int a = peakElement(arr);
    cout << a;
}
// a/n: make the size of the array a variable
#include <iostream>
using namespace std;
int minimum(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] < arr[mid])
        {
            low = mid + 1;
        }
        else if (arr[mid] < arr[high])
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr[i] = ele;
    }
    cout << arr[minimum(arr, n)];
    return 0;
}
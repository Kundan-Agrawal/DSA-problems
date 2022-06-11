#include <iostream>
using namespace std;

int lastOccIerative(int arr[], int low, int high, int x, int n)
{
    while (low <= high)
    {
        int mid;
        mid = (low + high) / 2;
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int lastOccRecursive(int arr[], int low, int high, int x, int n)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (x > arr[mid])
    {
        return lastOccRecursive(arr, mid + 1, high, x, n);
    }
    else if (x < arr[mid])
    {
        return lastOccRecursive(arr, low, mid - 1, x, n);
    }
    else
    {
        if (mid == n - 1 || arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        else
        {
            return lastOccRecursive(arr, mid + 1, high, x, n);
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
    int val;
    cin >> val;
    cout << lastOccRecursive(arr, 0, n - 1, val, n) << endl;
    cout << lastOccIerative(arr, 0, n - 1, val, n) << endl;
    return 0;
}

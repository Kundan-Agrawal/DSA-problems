#include <iostream>
using namespace std;

int firstOccRecursive(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (x > arr[mid])
    {
        return firstOccRecursive(arr, mid + 1, high, x);
    }
    else if (x < arr[mid])
    {
        return firstOccRecursive(arr, low, mid - 1, x);
    }
    else
    {
        if (mid == 0 || arr[mid] != arr[mid - 1])
        {
            return mid;
        }
        else
        {
            return firstOccRecursive(arr, low, mid - 1, x);
        }
    }
}
int firstOccIerative(int arr[], int low, int high, int x)
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
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
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
    cout << firstOccRecursive(arr, 0, n - 1, val) << endl;
    cout << firstOccIerative(arr, 0, n - 1, val) << endl;
    return 0;
    return 0;
}

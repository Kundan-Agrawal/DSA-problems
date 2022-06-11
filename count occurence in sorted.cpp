// in this problem i have used first occurence and last occurence ierative solution
// Already solved for first and last occurence in the binary folder
#include <iostream>
using namespace std;

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
int coutOcc(int arr[], int n, int x)
{
    int first_index = firstOccIerative(arr, 0, n - 1, x);
    if (first_index == -1)
    {
        return 0;
    }
    else
    {
        return (lastOccIerative(arr, 0, n - 1, x, n) - first_index + 1);
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
    cout << coutOcc(arr, n, val);
    return 0;
}
#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[low] < arr[mid])
        {
            if (x >= arr[low] && x < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (x > arr[mid] && x <= arr[high])
            {
                low = mid - 1;
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
    cout << binarySearch(arr, 0, n - 1, val);
    return 0;
}
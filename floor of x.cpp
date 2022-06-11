#include <iostream>
using namespace std;

int floorSearch(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x >= arr[high])
        {
            return high;
        }
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (mid > 0 && arr[mid - 1] <= x && x < arr[mid])
        {
            return mid - 1;
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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
    cout << floorSearch(arr, n, val);
    return 0;
}
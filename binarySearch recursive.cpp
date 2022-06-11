#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int x)
{

    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
    {
        return binarySearch(arr, low, mid - 1, x);
    }
    else
    {
        return binarySearch(arr, mid + 1, high, x);
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
    cout << binarySearch(arr, 0, n - 1, val);
    return 0;
}
// O(logn),O(logn)
// so iterative binary search is more efficent beacuse constant space

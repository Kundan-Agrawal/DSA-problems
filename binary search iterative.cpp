// below code is iterative approch of binary search
// O(Logn),O(1)
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int val)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid;
        mid = (low + high) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] > val)
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
    cout << binarySearch(arr, n, val);
    return 0;
}
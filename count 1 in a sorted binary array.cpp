// binary array means there are only o and 1 in array e.g [0,0,0,1,1,1]
// idea here is to use first occurence function to find first occuremce of 1
// we have already made this function it is in binary search folder

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
    cout << (n - firstOccIerative(arr, 0, n - 1, 1));
    return 0;
}
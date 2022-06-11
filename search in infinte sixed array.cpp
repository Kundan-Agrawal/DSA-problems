// here infinte seem not to be fessible , question want to tel us that
// there are many element in array if you run a program for all array you will get TLE error

// we have to print index of the no.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int val)
{
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

int search(int arr[], int x)
{
    if (arr[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] < x)
    {
        i = i * 2;
    }
    if (arr[i] == x)
        return i;
    return binarySearch(arr, i / 2 + 1, i - 1, x);
}

int main()
{
    int n = 11;
    cin >> n;
    int arr[] = {1, 10, 15, 20, 40, 60, 80, 100, 200, 500, 1000};
    cout << search(arr, 100);
    return 0;
}
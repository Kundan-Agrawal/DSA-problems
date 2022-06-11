#include <iostream>
using namespace std;
int countOnes(int arr[], int N)
{
    int low = 0;
    int high = N - 1;
    while (low <= high)
    {
        int mid;
        mid = (low + high) / 2;

        if (arr[mid] == 0)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == N - 1 || (arr[mid] != arr[mid + 1]))
            {

                return (mid + 1);
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    // Your code here
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
    cout << countOnes(arr, n);
    return 0;
}
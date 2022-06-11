// question is to find a pair whose sum is equal to x if yes return true else return false

#include <iostream>
using namespace std;
bool pairSum(int arr[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] == x)
        {
            return true;
        }
        else if ((arr[left] + arr[right]) > x)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << pairSum(arr, n, x);
    return 0;
    return 0;
}
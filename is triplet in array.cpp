// question is to return true is there any tripet whose sum is x other wise return false
#include <iostream>
using namespace std;

bool pairSum(int arr[], int left, int right, int x)
{
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

bool istriplet(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (pairSum(arr, i + 1, n - 1, x - arr[i]) == true)
        {
            return true;
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
    cout << istriplet(arr, n, x);
    return 0;
}
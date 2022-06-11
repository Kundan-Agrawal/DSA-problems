#include <iostream>
using namespace std;
int subsetSum(int arr[], int n, int sum)
{
    if (n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }
    return subsetSum(arr, n - 1, sum) + subsetSum(arr, n - 1, sum - arr[n - 1]);
}
int main()
{
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    int arr[n];
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        arr[i] = ele;
    }
    cout << subsetSum(arr, n, sum);

    return 0;
}
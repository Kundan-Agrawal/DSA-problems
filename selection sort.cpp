#include <iostream>
using namespace std;

// naive impletation O(n^2),O(n)
void naive_selectSort(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int minimum_index = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[minimum_index])
            {
                minimum_index = j;
            }
        }
        temp[i] = arr[minimum_index];
        arr[minimum_index] = __INT_FAST8_MAX__;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
// efficient approch O(n^2) ,O(1)
void selectSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[i], arr[min_ind]);
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
    selectSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // naive_selectSort(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}
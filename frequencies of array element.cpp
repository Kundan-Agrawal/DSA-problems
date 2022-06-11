#include <iostream>
#include <unordered_map>
using namespace std;
// Naive solution
void printFreqNaive(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            continue;
        }
        int freq = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        cout << arr[i] << " " << freq << endl;
    }
}
// using hashing order of output is random
void printFreq(int arr[], int n)
{
    unordered_map<int, int> h;
    for (int i = 0; i < n; i++)
    {
        h[arr[i]]++;
    }
    for (auto e : h)
    {
        cout << e.first << " " << e.second << endl;
    }
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
    printFreq(arr, n);
    return 0;
}
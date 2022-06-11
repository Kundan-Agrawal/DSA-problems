// naive solution

// void intersection(int a[], int b[],int m,int n){
//     for(int i=0;i<m;i++){
//         if(i>0&&a[i]==a[i-1]){
//             continue;
//         }
//         for(int j=0;j<n;j++){
//             if(a[i]==b[j]){
//                 cout<<a[i]<<" ";
//                 break;
//             }
//         }
//     }
// }

// efficient solution
#include <iostream>
using namespace std;
void intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n];
    int lst[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> lst[j];
    }
    intersection(arr, lst, n, m);
    return 0;
}
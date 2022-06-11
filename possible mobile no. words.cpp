#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
void helper(vector<char> keypad[], int input[], string res, int index, int n, vector<string> ans)
{
    if (index == n)
    {
        ans.push_back(res);
        return;
    }
    int digit = input[index];

    int len = keypad[digit].size();

    for (int i = 0; i < len; i++)
    {
        helper(keypad, input, res + keypad[digit][i], index + 1, n, ans);
    }
}
vector<string> possibleWords(int a[], int N)
{
    vector<char> keypad[] =
        {
            {}, {}, // 0 and 1 digit don't have any characters associated
            {'a', 'b', 'c'},
            {'d', 'e', 'f'},
            {'g', 'h', 'i'},
            {'j', 'k', 'l'},
            {'m', 'n', 'o'},
            {'p', 'q', 'r', 's'},
            {'t', 'u', 'v'},
            {'w', 'x', 'y', 'z'}};
    extern vector<string> ans;
    helper(keypad, a, string(""), 0, N, ans);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<string> res = possibleWords(a, n);
    for (string i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}

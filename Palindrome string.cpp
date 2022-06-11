#include <iostream>
using namespace std;
bool isPalindrome(string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
}

int main()
{
    string word;
    cin >> word;
    bool res;
    res = isPalindrome(word, 0, word.length() - 1);
    cout << res;

    return 0;
}
// O(n), O(n)
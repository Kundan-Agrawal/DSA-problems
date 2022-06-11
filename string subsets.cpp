// python code below
//  def powerSet(s):
//      #code here
//      res = []
//      helper(s, res, "", 0)
//      res.sort()
//      return res

// def helper(s, res, curr, i):
//     if i >= len(s):
//         res.append(curr)
//         return
//     helper(s, res, curr, i+1)
//     helper(s, res, curr+s[i], i+1)

#include <bits/stdc++.h>
#include <string>
using namespace std;

void helper(string s, vector<string> res, string curr, int i)
{
    if (i >= s.length())
    {
        res.push_back(curr);
        return;
    }
    helper(s, res, curr, i + 1);
    helper(s, res, curr + s[i], i + 1);
}
vector<string> subsets(string s)
{
    vector<string> arr;
    int i = 0;
    string curr;
    helper(s, arr, curr, i);
    return arr;
}

int main()
{
    string s;
    cin >> s;
    vector<string> res = subsets(s);
    cout << res;

    return 0;
}
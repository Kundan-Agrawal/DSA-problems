// below code is the naive approch
//
//  #include <iostream>
//  using namespace std;
//  int sqrt(int x)
//  {
//      int i = 1;
//      while (i * i <= x)
//      {
//          i++;
//      }
//      return (i - 1);
//  }
//  int main()
//  {
//      int n;
//      cin >> n;
//      cout << sqrt(n);
//      return 0;
//  }

// below method uses binary search

#include <iostream>
using namespace std;

int sqrt(int x)
{
    int low = 1, high = x, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int mid_square = mid * mid;
        if (mid_square == x)
        {
            return mid;
        }
        else if (mid_square > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << sqrt(n);
    return 0;
}
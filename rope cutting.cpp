
#include <iostream>
using namespace std;

// Question is return maximun number of pieces that you can cut the rope of length n such that
//  length of every piece (after cuts) should be in set{ a, b , c}
//  if not possible to cuts of length a, b, c then print -1

int pieces(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int res, n1, n2, n3;
    n1 = pieces((n - a), a, b, c);
    n2 = pieces((n - b), a, b, c);
    n3 = pieces((n - c), a, b, c);
    if ((n1 >= n2) && (n1 >= n3))
    {
        res = n1;
    }
    else if ((n2 >= n1) && (n2 >= n3))
    {
        res = n2;
    }
    else
    {
        res = n3;
    }

    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << pieces(n, a, b, c);
    return 0;
}

// below code is also write but while i was comling it it is showing__comp cannot be function
// so i modity the code the and above code is working

// #include <iostream>
// using namespace std;

// // Question is return maximun number of pieces that you can cut the rope of length n such that
// //  length of every piece (after cuts) should be in set{ a, b , c}
// //  if not possible to cuts of length a, b, c then print -1

// int pieces(int n, int a, int b, int c)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n < 0)
//     {
//         return -1;
//     }
//     int res;
//     res = max(pieces((n - a), a, b, c), pieces((n - b), a, b, c), pieces((n - c), a, b, c));
//     if (res == -1)
//     {
//         return -1;
//     }
//     return res + 1;
// }
// int main()
// {
//     int n, a, b, c;
//     cin >> n >> a >> b >> c;
//     cout << pieces(n, a, b, c);
//     return 0;
// }
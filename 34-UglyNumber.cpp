#include <bits/stdc++.h>
using namespace std;
bool isUgly(int n)
{
    if (n == 0 || n == 1)
        return n;
    int num = n;
    while (num % 2 == 0)
    {
        num /= 2;
    }
    while (num % 3 == 0)
    {
        num /= 3;
    }
    while (num % 5 == 0)
    {
        num /= 5;
    }

    if (num == 1)
        return true;

    return false;
}
int main()
{
    int n;
    cin >> n;
    cout << isUgly(n);
    return 0;
}
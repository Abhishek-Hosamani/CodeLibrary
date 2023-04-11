#include <bits/stdc++.h>
using namespace std;
int addDigits(int num)
{
    if (num <= 9)
        return num;
    long long int temp = 0;
    while (num)
    {
        int t = num % 10;
        temp += t;
        num = num / 10;
    }

    if (temp % 9 == 0)
        return 9;
    return temp % 9;
}
int main()
{

    return 0;
}
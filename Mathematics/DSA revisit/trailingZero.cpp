#include <iostream>
using namespace std;

int trailingZero(int n)
{
    int fact = 1;
    int temp = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;

    while (fact != 0)
    {
        temp = temp % 10;
        count++;
        fact;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << trailingZero(n) << endl;
    return 0;
}
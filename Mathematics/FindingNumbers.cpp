// There are multiple methods for this problem.

#include <iostream>
using namespace std;

int iterativemethod(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int recursivemethod(long n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + recursivemethod(n / 10);
}

int main()
{
    int n;
    cout << "Enter number: ";

    cin >> n;

    cout << iterativemethod(n) << endl;

    cout << recursivemethod(n) << endl;
}
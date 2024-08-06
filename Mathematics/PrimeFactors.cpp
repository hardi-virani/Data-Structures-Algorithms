#include <iostream>
#include <cmath>
using namespace std;

// coudn't wrote my own method it was lacking something.
// Always think from broader perscecptive of the problems and small from numbers. Like powers, roots in numbers and broader means that how one loop or something like that can solve the whole problems. without including multiple rules at once.

int isprime(int N)
{
    if (N < 2 || (!(N & 1) && N != 2))
        return 0;
    for (int i = 3; i * i <= N; i += 2)
    {
        if (!(N % i))
            return 0;
    }
    return 1;
}

void primfactors(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (isprime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << (i) << endl;
                x = x * i;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    primfactors(n);
    return 0;
}
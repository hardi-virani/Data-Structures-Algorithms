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
// This function is not written by me.
// The TC of this function is O(n*n log n).
void primfactors(int n)
{
    if (isprime(n))
    {
        cout << (n);
    }

    for (int i = 2; i < n; i++)
    {
        if (isprime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << (i) << " ";
                x = x * i;
            }
        }
    }
}

// My Optimized solution (Written by me)
void primefactors2(int n)
{
    if (isprime(n))
    {
        cout << (n) << endl;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            if (isprime(i))
            {
                for (int j = 2; j < n; j++)
                {
                    int powers = pow(i, j);
                    if (n % powers == 0)
                    {
                        cout << i << " ";
                    }
                    else
                    {
                        continue;
                    }
                }
                cout << i << " ";
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    // cout << "Naive method: ";
    primfactors(n);
    cout << endl;

    // cout << "Optimized method: ";
    primefactors2(n);
    cout << endl;
    return 0;
}
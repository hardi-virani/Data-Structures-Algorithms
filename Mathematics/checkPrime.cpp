#include <iostream>
#include <cmath>
using namespace std;

// initial code by myself
bool isPrime(int n)
{
    int count = 0;
    if (n > 1 && n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            return true; // 1
        }
    }
    else if (n == 2)
    {
        return true;
    }
    return false; // 0
}

// naive method //modified version of the previous function.
bool primechecking(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool checkingPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    else if (n > 2 && n % 2 == 0)
    {
        return false;
    }
    double root = sqrt(n);
    if (root == floor(root))
    {
        return false;
    }
    else
    {
        return true;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int value = isPrime(n);

    if (value == 1)
    {
        cout << "Prime Number: 1" << endl;
    }
    else if (value == 0)
    {
        cout << "Not Prime Number: 0" << endl;
    }

    cout << primechecking(n) << endl;
    cout << checkingPrime(n) << endl;

    return 0;
}
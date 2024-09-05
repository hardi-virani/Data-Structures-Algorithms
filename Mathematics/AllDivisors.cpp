#include <iostream>
using namespace std;

// Naive method
void all_Divisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// Efficient method Output: Inorder
void Divisors1(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
}

// Efficient method Output: Order
void Divisor(int n)
{
    for (int i = n; i * i >= 1; i--)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    all_Divisors(n);
    cout << endl;

    Divisor(n);
    cout << endl;

    Divisors1(n);
    return 0;
}
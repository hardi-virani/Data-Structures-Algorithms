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

// Efficient method
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
    return 0;
}
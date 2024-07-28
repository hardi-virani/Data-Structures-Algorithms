#include <iostream>
using namespace std;

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
        if (count > 2)
        {
            // cout << "Not prime";
            return false; // 0
        }
        return true; // 1
    }
    else if (n == 2)
    {
        // cout << "Not prime";
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int value = isPrime(n);
    if (value == 1)
    {
        cout << "Prime Number" << endl;
    }
    else if (value == 0)
    {
        cout << "Not Prime Number" << endl;
    }
    // cout << isPrime(n) << endl;
    return 0;
}
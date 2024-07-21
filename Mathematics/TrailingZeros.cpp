// This problem means counting the number of 0s after getting the factorial of the number.
#include <iostream>
using namespace std;

long long factorial(long long n)
{
    long long fact = n;
    for (long long i = 1; i < n; i++)
    {
        fact = fact * i;
    }

    cout << "Fact:" << fact << endl;

    long long count = 0;
    long long temp = fact;

    while (temp != 0)
    {
        long long ld = temp % 10;
        temp = temp / 10;
        if (ld == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    long long n;
    cout << "Enter n: ";
    cin >> n;

    cout << factorial(n) << endl;
    return 0;
}
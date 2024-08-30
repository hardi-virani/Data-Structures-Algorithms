#include <iostream>
using namespace std;

// Naive method
int all_Divisors(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    return n;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << all_Divisors(n) << " " << endl;
    return 0;
}
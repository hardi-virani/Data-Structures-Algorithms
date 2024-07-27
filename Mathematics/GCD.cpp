#include <iostream>
using namespace std;

int GCD(int n, int m)
{
    int temp = 0;
    if (n > m)
    {
        for (int i = 1; i < n; i++)
        {
            int pf = n / i;
            temp = pf;
            if (m % temp == 0 && n % temp == 0)
            {
                // return temp;
                break;
            }
        }
    }
    else if (m > n)
    {
        for (int i = 1; i < m; i++)
        {
            int pf = m / i;
            temp = pf;
            if (n % temp == 0 && m % temp == 0)
            {
                // return temp;
                break;
            }
        }
    }
    return temp;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int m;
    cout << "Enter m: ";
    cin >> m;

    cout << GCD(n, m) << endl;
    return 0;
}
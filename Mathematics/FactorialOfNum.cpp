#include <iostream>
using namespace std;

// recursive solution
int factorial_Recur(int n)
{
    // if (n == 0)
    // {
    //     return 0;
    // }
    // else if (n == 1)
    // {
    //     return 1;
    // }

    // We can also write like this
    if (n == 0)
    {
        return 1;
    }
    // upper code is most preferable because we can write less code and also less time consuming and can also get desirable result.
    else
    {
        return n * factorial_Recur(n - 1);
    }
}

// itrative solution
int factorial_IT(int n)
{
    int fact = n;
    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;
    cin >> n;

    cout << "Itrative: " << factorial_IT(n) << endl;

    cout << "Recursive: " << factorial_Recur(n) << endl;
    return 0;
}
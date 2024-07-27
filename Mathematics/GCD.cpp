// My Learnings : Always try all the cases. For example in this case i tried all even and odd numbers of possible pair and then came up with an idea of minimum and maximum number. Thou i didn't tried to take minimum number first because i was stuck with the perspective of writing this program with max number.
// Another basic learning would be : If the problem is solved then try to make it more optimised than the written code rather then direct jumping for moving forward.
// J motu che e chelle nanu to thai j che ne...!!! Be careful while tackling the problem.
#include <iostream>
using namespace std;

// This function is written by myself.(Might not be optimized code but the logic behind this is mine).
// Optimised code is given below which might be best in terms of less code and both the complexities.(This code will be from the DSA course(GFG course) from which i am learning DSA)
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
    else
    {
        return n;
    }
    return temp;
}

// OPTIMISED CODE
int GCD2(int a, int b)
{
    int result = min(a, b);
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int m;
    cout << "Enter m: ";
    cin >> m;

    cout << "GCD: " << GCD(n, m) << endl;

    cout << "GCD2:" << GCD2(n, m) << endl;
    return 0;
}
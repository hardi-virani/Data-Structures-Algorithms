#include <iostream>
using namespace std;

// bool palindrom()
// {
//     int n;
//     int n1;
//     while (n != 0)
//     {
//         n1 = n / 10;
//     }
//     if (n1 == n)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int n1;

    while (n != 0)
    {
        n = n / 10;
        n1 = n / 10;
    }
    if (n1 == n)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
    return 0;
}
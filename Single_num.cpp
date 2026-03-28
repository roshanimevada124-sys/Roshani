#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 3, 5, 2, 3};
    int n = sizeof(a)/sizeof(a[0]);

    int result = 0;

    for(int i = 0; i < n; i++)
    {
        result ^= a[i]; // XOR of same numbers is 0, so duplicate elements cancel out
    }

    cout << "Single number is: " << result;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, d;

    cout << "Enter number: ";
    cin >> n;

    int temp = n;

    while (temp > 0) {
        d = temp % 10;
        sum = sum + d * d * d;
        temp = temp / 10;
    }

    if (sum == n)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
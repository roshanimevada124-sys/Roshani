#include <iostream>
using namespace std;

int main() {
    int n=5;

    int arr[n];

    cout << "Enter the five elements:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element is: " << largest;

    return 0;
}
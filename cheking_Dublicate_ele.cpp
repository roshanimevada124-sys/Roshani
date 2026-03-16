#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool duplicate = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                cout << "Duplicate element found: " << arr[i] << endl;
                break;
            }
        }
    }

    if(!duplicate) {
        cout << "No duplicate elements found";
    }

    return 0;
}
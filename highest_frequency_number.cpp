#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2, 4};
    int n = 7;

    int maxCount = 0;
    int mostFrequent;

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    cout << "Most frequent element: " << mostFrequent << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}
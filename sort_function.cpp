#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // sorts in ascending order

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

int removeValue(int* arr, int size, int val) {
    int* read = arr;
    int* write = arr;
    int* end = arr + size;

    while (read < end) {
        if (*read != val) {
            *write = *read;
            write++;
        }
        read++;
    }

    return write - arr;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int val;
    cin >> val;

    int newSize = removeValue(arr, n, val);
    for (int i = 0; i < newSize; i++) cout << arr[i] << " ";
}

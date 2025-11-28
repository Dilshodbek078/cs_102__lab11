#include <iostream>
using namespace std;

void fixNeg(int* arr, int size) {
    int* p = arr;
    int* end = arr + size;
    while (p < end) {
        if (*p < 0) *p = 0;
        p++;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    fixNeg(arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

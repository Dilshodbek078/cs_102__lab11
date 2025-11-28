#include <iostream>
using namespace std;

int* findMax(int* arr, int size) {
    int* maxPtr = arr;
    int* p = arr + 1;
    int* end = arr + size;
    while (p < end) {
        if (*p > *maxPtr) maxPtr = p;
        p++;
    }
    return maxPtr;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int* maxElement = findMax(arr, n);
    cout << *maxElement;
}

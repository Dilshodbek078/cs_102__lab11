#include <iostream>
using namespace std;

void reverseArr(int** arr, int size) {
    int* start = *arr;
    int* end = *arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverseArr(&arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete[] arr;
}

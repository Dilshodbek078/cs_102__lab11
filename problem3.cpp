#include <iostream>
#include <string>
using namespace std;

int countValid(int* arr[], int size) {
    int count = 0;
    int** p = arr;
    int** end = arr + size;

    while (p < end) {
        if (*p != nullptr)
            count++;
        p++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    int* arr[n];

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "-") {
            arr[i] = nullptr;
        } else {
            int* val = new int(stoi(s));
            arr[i] = val;
        }
    }

    cout << countValid(arr, n);

    return 0;
}

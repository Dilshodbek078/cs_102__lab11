#include <iostream>
using namespace std;

bool identical(const int* a, int** bptr, int size) {
    const int* pa = a;
    int* pb = *bptr;
    const int* end = a + size;

    while (pa < end) {
        if (*pa != *pb) return false;
        pa++;
        pb++;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int* bp = b;
    cout << identical(a, &bp, n) << endl;
}

#include <iostream>
using namespace std;

void mergeSorted(const int* a, int n, const int* b, int m, int* out) {
    const int* pa = a;
    const int* pb = b;
    const int* endA = a + n;
    const int* endB = b + m;
    int* po = out;

    while (pa < endA && pb < endB) {
        if (*pa <= *pb) {
            *po = *pa;
            pa++;
        } else {
            *po = *pb;
            pb++;
        }
        po++;
    }

    while (pa < endA) {
        *po = *pa;
        pa++;
        po++;
    }

    while (pb < endB) {
        *po = *pb;
        pb++;
        po++;
    }
}

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i];

    int out[n + m];
    mergeSorted(a, n, b, m, out);

    for (int i = 0; i < n + m; i++) cout << out[i] << " ";
}

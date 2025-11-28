#include <iostream>
using namespace std;

void swapRef(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapPtr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cin >> x >> y;

    swapRef(x, y);
    // or: swapPtr(&x, &y);

    cout << x << " " << y;
    return 0;
}

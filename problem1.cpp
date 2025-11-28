#include <iostream>
using namespace std;

void setToHundred(int** p) {
    **p = 100;
}

int main() {
    int x;
    cin >> x;

    int* ptr = new int;
    *ptr = x;

    setToHundred(&ptr);

    cout << *ptr;

    delete ptr;
    return 0;
}

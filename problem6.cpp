#include <iostream>
using namespace std;

void printIfValid(int* p) {
    if (p == nullptr)
        cout << "null";
    else
        cout << *p;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int* p1;
    if (s1 == "n") p1 = nullptr;
    else p1 = new int(stoi(s1));

    int* p2;
    if (s2 == "n") p2 = nullptr;
    else p2 = new int(stoi(s2));

    printIfValid(p1);
    cout << ", ";
    printIfValid(p2);

    if (p1) delete p1;
    if (p2) delete p2;

    return 0;
}

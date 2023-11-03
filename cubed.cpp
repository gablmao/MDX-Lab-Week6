#include <iostream>

using namespace std;

int cubeInt(int n);

int main() {
    cout << "Enter an integer: ";
    int x;
    cin >> x;

    cout << cubeInt(x) << endl;
    return 0;
}

int cubeInt(int n) {
    return n * n * n;
}
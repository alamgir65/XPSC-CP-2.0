#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

        int q, r;
        q = a / b;
        r = a % b;

        if (r < 0) {
            r += (b < 0) ? -b : b;
            q = (a - r) / b;
        }

        cout << q << ' ' << r << '\n';

    return 0;
}
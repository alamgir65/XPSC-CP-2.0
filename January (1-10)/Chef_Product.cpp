#include <iostream>
#include <vector>

using namespace std;

long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Calculate the number of distinct sizes of good-sets
        int count = 0;
        for (int i = 0; i <= n; ++i) {
            if ((n - i) % 2 == 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}

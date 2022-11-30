#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i == n / i) {
                sum += i;
            }
            else {
                sum += i;
                sum += n / i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
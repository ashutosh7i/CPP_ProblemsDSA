#include <iostream>
using namespace std;
int main() {
    unsigned int x;
    int counter = 0;
    cout << "enter a number:" << endl;
    cin >> x;
    while (x != 1) {
        if (x % 2 != 0)
            x = 3 * x + 1;
        else if (x % 2 == 0)
            x = x / 2;
        counter++;
        cout << x << endl;
    }
    cout << "the value of the counter is :" << counter;
}

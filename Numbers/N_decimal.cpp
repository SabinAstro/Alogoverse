#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    cout << (a / b) << ".";

    int rem = a % b;
    string decimal = "";
    bool flag = false;

    for (int i = 1; i <= n; i++) {
        if (rem == 0) {
            flag = true;
            decimal += string(n - i + 1, '0');
            break;
        }
        rem *= 10;
        decimal += to_string(rem / b);
        rem %= b;
    }

    cout << decimal << endl;



    return 0;
}



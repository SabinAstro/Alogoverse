#include <iostream>
#include <vector>
using namespace std;

class Prime {
public:
    static int num; 
    static vector<int> primes; 

    Prime() {}

    void first_prime() {
        cout << 2 << " ";
        primes.push_back(2); 
    }

    void next_prime() {
        while (true) {
            bool is_prime = true;

            if (num % 2 == 0) {
                num++;
                continue;
            }

            for (int p : primes) {
                if (p * p > num)
                    break;
                if (num % p == 0) {
                    is_prime = false;
                    break;
                }
            }

            if (is_prime) {
                cout << num << " ";
                primes.push_back(num);
                num += 2; 
                break;
            }

            num += 2;
        }
    }
};

int Prime::num = 3;
vector<int> Prime::primes;

int main() {
    bool flag, flag2 = true;
    cout << "Want to generate the first prime? Press 1 (Yes) or 0 (No): ";
    cin >> flag;

    Prime p;

    if (flag) {
        p.first_prime();  
    }

    while (flag && flag2) {
        cout << "\nWant to generate another prime? Press 1 (Yes) or 0 (No): ";
        cin >> flag2;
        if (flag2) {
            p.next_prime(); 
        }
    }

   
    return 0;
}

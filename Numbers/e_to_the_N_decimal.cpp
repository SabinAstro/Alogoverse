#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
using namespace boost::multiprecision;

using high_prec = number<cpp_dec_float<10000>>;

int main() {
    high_prec e = 1;
    high_prec fact = 1;
    int n;
    cout<<"Enter n(n<10000)";
    cin>>n;

    for (int i = 1; i <= 11500; ++i) {
        fact *= i;
        e += 1 / fact;
    }

    ofstream fout("e_10000_digits.txt");
    fout << fixed << setprecision(n) << e << endl;
    fout.close();

    cout << "Done! Check e_10000_digits.txt for result." << endl;

    return 0;
}

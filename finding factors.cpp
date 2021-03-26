// (c) S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    // print all factors of each number from 1 to 100 inclusive
    for(int n=1; n<=100; ++n) {               // iterate from 1 to 100 inclusive
        cout << "Factors of " << n << ": ";   // iterate from 1 to n, printing all factors of n
        for(int f=1; f<=n; ++f) {
            if(n%f==0) {
                cout << f << " ";
            }
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}

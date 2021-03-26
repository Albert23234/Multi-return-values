#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    // c value depends on r value
    cout << "Triangle" << endl;
    for(int r=1; r<=10; ++r) {
        for(int c=r; c<=10; ++c)  {
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "Coordinates (i,j)" << endl;
    for(int r=1; r<=10; ++r) {
        for(int c=r; c<=10; ++c) {
            cout << r << "," << c << "  ";
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}

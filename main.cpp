#include <iostream>
#include "headers/int3.h"

using namespace std;

int main(void) {
    int3 a(1, 2, 3);
    int3 b(4, 5, 6);
    int3 c(a);

    cout << "Affectation" << endl;
    cout << a << " " << b << " " << c << endl;
    b = a;
    cout << a << " " << b << " " << c << endl;

    b = {4, 5, 6};
    cout << a << " " << b << endl;

    cout << endl;
    cout << "arithmétique" << endl;
    cout << a + b << " " << b - a << " " << a * b << " " << b / a << endl;

    cout << endl;
    cout << "artihmétique & affectation" << endl;
    cout << (a += b) << (a -= b) << (a *= b) << (a /= b) << endl;

    cout << endl;
    cout << "Egalité" << endl;    
    cout << (a == b) << " " << (a == a) << endl;
    
    cout << endl;
    cout << "arithmétique scalaire" << endl;
    cout << a + 3 << a - 3 << a * 3 << a / 3 << endl;
    cout << (a += 3) << (a -= 3) << (a *= 3) << (a /= 3) << endl;

    cout << endl;
    cout << "dot et norm" << endl;
    cout << a.dot(b) << endl;
    cout << a.norm() << endl;

    return 0;
}
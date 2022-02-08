#include <iostream>
#include "RPTypes.h"
//#include "3Dview.h"

using namespace std;

//Ajouter cross product

int main(void) {
    /*
    float3 a(1.25, 2.5, 3.75);
    float3 b(4.0, 5.5, 6.0);
    float3 c(a);

    cout << "Affectation" << endl;
    cout << a << " " << b << " " << c << endl;
    b = a;
    cout << a << " " << b << " " << c << endl;

    b = {4.0, 5.5, 6.0};
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
    */
    
    float2 a(1.5, 2.0);
    float2 b(4.0, 5.5);
    float2 c(a);

    cout << "Affectation" << endl;
    cout << a << " " << b << " " << c << endl;
    b = a;
    cout << a << " " << b << " " << c << endl;

    b = {4.0, 5.5};
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
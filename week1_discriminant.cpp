#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c, D;
    cin >> a >> b >> c;
    D = b*b-4*a*c;
    if (D < 0 || (a == 0 && b == 0)) cout << "";
    else {
        if (a == 0) {
            cout << -c/b;
        }
        else {
            if (D == 0 || (a == 0 && c == 0)) {
                cout << (-b+sqrt(D))/(2*a);
            }
            else cout << (-b+sqrt(D))/(2*a) << " " << (-b-sqrt(D))/(2*a);
        }
    }
    return 0;
}

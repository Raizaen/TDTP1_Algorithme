#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x(0);
    float f(0);
    std::cout << "f(x) = (x^2-3x+0.5)(x-3)" << endl << "Saisir x : ";

            std::cin >> x;

                f = pow(x, 2);

                f = f - 3*x;

                f = f + 0.5;

                f = f * (x-3);

    std::cout << "f(x)= " << f;

    return 0;
}

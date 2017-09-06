#include <iostream>

using namespace std;

int main()
{
	int a(0), b(0); // a et b deux entiers 

    cout << "Entrez un entier : ";
            cin >> a; // Saisir a

    cout << "Entrez un autre entier : ";
            cin >> b; // Saisir b
    cout << "Le produit de " << a << " par " << b << " est " << a * b;

    return 0;
}

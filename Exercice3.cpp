#include <iostream>

using namespace std;

int main()
{
    int a;
    int m;
    int i;
    int ac;
    int mc;
    int ic;
    float moy;

    cout << "Note en Anglais : ";

        cin >> a;

            cout << "Coeff ? ";

                cin >> ac;

    cout << "Note en Maths : ";

        cin >> m;

            cout << "Coeff ? ";

                cin >> mc;

    cout << "Note en Info : ";

        cin >> i;

            cout << "Coeff ? ";

                cin >> ic;

    moy = ((a*ac)+(m*mc)+(i*ic))/(ac+mc+ic);

    cout << "L'etudiant a obtenu " << moy << " de moyenne " ;

    return 0;
}

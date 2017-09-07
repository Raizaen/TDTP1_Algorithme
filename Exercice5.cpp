#include <iostream>

using namespace std;

int main()
{
    double nbVal;
    int v1, v2, v3;
    int c1, c2, c3, c4;
    bool check;

    do
    {
        check = 1;

        cout << "Utilisation de 3 ou 4 valeurs ? : ";
            cin >> nbVal;
                cout << endl;

        if(nbVal == 3)
        {
            cout << "Premiere valeur : ";
                cin >> v1;
                     cout << "Deuxieme valeur : ";
                        cin >> v2;
                            cout << "Troisieme valeur : ";
                                cin >> v3;
            int vTemp = v1;
                v1 = v2;
                v2 = v3;
                v3 = vTemp;
                    cout << "Permutation des Valeurs" << endl;
                        cout << "Premiere valeur : " << v1 << endl;
                            cout << "Deuxieme valeur : " << v2 << endl;
                                 cout << "Troisieme valeur : " << v3 << endl;
        }

        else if(nbVal == 4)
        {
            cout << "Premiere valeur : ";
                cin >> c1;
                    cout << "Deuxieme valeur : ";
                        cin >> c2;
                            cout << "Troisieme valeur : ";
                                cin >> c3;
                                    cout << "Quatrieme valeur : ";
                                        cin >> c4;
            int cTemp = c1;
                c1 = c2;
                c2 = c3;
                c3 = c4;
                c4 = cTemp;
                    cout << "Permutation des Valeurs" << endl;
                        cout << "Premiere valeur : " << c1 << endl;
                            cout << "Deuxieme valeur : " << c2 << endl;
                                cout << "Troisieme valeur : " << c3 << endl;
                                    cout << "Quatrieme valeur : " << c4 << endl;
        }

        else
        {
            check = 0;
                cout << "Nombre errone" << endl;
        }

    }
    while(!check);

    return 0;
}
#include <iostream>

using namespace std;

    int main()
{
    double note(0);

    cout << "Entrer une note : ";

        cin >> note;

            cout << endl;

    if (note < 0 || note > 20)
    {
        cout << "Note incorrecte" << endl;
        }
    else
    {
        cout << "Note correcte" << endl;
        }

    return 0;
}

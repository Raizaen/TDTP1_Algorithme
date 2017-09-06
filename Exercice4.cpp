#include <iostream>

using namespace std;

int main()
{
    int v1;
    int v2;

    cout << "v1= " ;

        cin >> v1;

    cout << "v2= ";

        cin >> v2;

    swap(v1, v2);

    cout << "v1= " << v1 << "v2= " << v2;

    return 0;
}

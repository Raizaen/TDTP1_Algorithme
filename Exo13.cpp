#include <iostream>

using namespace std;

int main(){
  int an;
    cout << "Entrer une annee : " << endl;
      cin >> an;
    if((an % 4) == 0)
      {
        if ((an %100) == 0)
        {
          if ((an % 400) == 0)
            cout << "L'annee est bissextile" << endl;
              else
                cout <<"L'annee n'est pas bissextile" << endl;  
        
      }
        else
          cout << "L'annee est bissextile" << endl;
        
    }
      else
        cout << "l'annee n'est pas bissextile" << endl; 
      return 0;
}
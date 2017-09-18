#include <iostream>

using namespace std;

int main (){
  
  int choix;
  double a, b, reponse, solution;
  
  cout << "Bienvenue, dans ce programme de mathematiques educatif" << endl;
    cout << "Entrer une valeur pour a : ";
      cin >> a;
        cout << endl;
          cout << "Entrer une valeur pour b : ";
            cin >> b;
              cout << endl;
                cout << "Avec quel opérateur voulez-vous faire votre calcul ?" << endl;
                  cout << "1: +, 2: -, 3: /, 4: *, Entrer 1, 2, 3 ou 4" << endl;
  cin >> choix;
  switch(choix){
  
  case 1:
    solution = a+b;
      cout << a << "+" << b << " = ?" << endl;
        cin >> reponse;
        if (reponse == solution)
          cout << "Bien joue" << endl;
        else
          cout << "Bien essaye" << endl << "La bonne reponse etait " << a+b << ".";
    break;
        
  case 2:
    solution = a-b;
      cout << a << "-" << b << " = ?" << endl;
        cin >> reponse;
        if (reponse == solution)
          cout << "Bien joue" << endl;
        else
          cout << "Bien essaye" << endl << "La bonne reponse etait " << a-b << ".";
    break;
    
  case 3:
    solution = a/b;
        cout << a << "/" << b << " = ?" << endl;
        cin >> reponse;
        if (reponse == solution)
          cout << "Bien joue" << endl;
        else
          cout << "Bien essaye" << endl << "La bonne reponse etait " << a/b << ".";
    break;
    
  case 4:
    solution = a*b;
      cout << a << "*" << b << " = ?" << endl;
        cin >> reponse;
        if (reponse == solution)
          cout << "Bien joue" << endl;
        else
          cout << "Bien essaye" << endl << "La bonne reponse etait " << a*b << ".";
    break;
  }
  return 0;
}
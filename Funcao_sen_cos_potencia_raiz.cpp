#include <iostream>
#include <cmath>
using namespace std;
int menu(int op)
{
    cout << "Menu de op��es:" << endl << "1 � Calcular o seno de um �ngulo em graus" << endl << "2 � Calcular o cosseno de um �ngulo em graus" << endl << "3 � Calcular a pot�ncia de um n�mero por outro" << endl << "4 � Calcular a raiz quadrada de um n�mero" << endl;
    cin >> op;
    return op;
}
int main()
{setlocale(LC_ALL, "Portuguese");
    int opcao;
    float resultado, x, y;
    opcao=menu(opcao);
    switch (opcao)
    { case 1:
        cout << "Informe o �ngulo: ";
        cin >> x;
        cout << sin(x * M_PI / 180.0);
        break;

    case 2:
         cout << "Informe o �ngulo: ";
         cin >> x;
         cout << cos(x * M_PI / 180.0);
         break;

    case 3:
        cout << "Informe o n�mero e seu expoente: ";
        cin >> x >> y;
        cout << pow(x,y);
        break;

    case 4:
        cout << "informe o n�mero: ";
        cin >> x;
        cout << sqrt(x);
        break;

    default:
        cout << "Op��o inv�lida";
    }

     return 0;
}

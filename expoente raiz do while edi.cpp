#include <iostream>
#include <cmath>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    int op;
    float expoente, base, num;
    cout << "Op��es: " << endl << "1 - Calcular pot�ncia de um n�mero por outro" << endl << "2 - Calcular raiz quadrada de um n�mero" << endl << "0 - sair" << endl;
    do {
         cin >> op;
         if(op == 2)
           {
            cout << "Informe o n�mero: ";
            cin >> num;
            cout << "Raiz: " << sqrt(num);
           }
       else if(op == 1)
           {
            cout << "Informe a base e o expoente: ";
            cin >> base >> expoente;
            cout << "Pot�ncia: " << pow(base, expoente);
           }
       else if(op < 0 || op > 3)
            cout << "Opc�o inv�lida" << endl;
    }while(op == 1 || op == 2);
        if(op == 0)
            cout << "Fim";
    return 0;
}

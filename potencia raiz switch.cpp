#include <iostream>
#include <cmath>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    int op;
    float expoente, base, num;
    cout << "Op��es: " << endl << "1 - Calcular pot�ncia de um n�mero por outro" << endl << "2 - Calcular raiz quadrada de um n�mero" << endl << "0 - sair" << endl;
    cin >> op;
    switch(op){
        case 1:
            cout << "Informe a base e o expoente: ";
            cin >> base >> expoente;
            cout << "Pot�ncia: " << pow(base, expoente);
            break;
        case 2:
            cout << "Informe o n�mero: ";
            cin >> num;
            cout << "Raiz: " << sqrt(num);
            break;
        case 0:
            cout << "Fim";
            break;
        default:
            cout << "Opc�o inv�lida" << endl;
            break;
}
    return 0;
}

#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
    int a;
    cout << "Informe o ano: ";
    cin >> a;
    if (a > 0)
    {
        if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
            cout << a << " � ano bissexto";
        else
            cout << a << " n�� � ano bissexto";
    }
    else
    cout << "N�mero inv�lido";

    return 0;
}

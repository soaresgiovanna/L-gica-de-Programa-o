#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    cout << "Informe o dividendo e o divisor, respectivamente: ";
    cin >> x >> y;
    if(x < 0 || y < 1)
        cout << "Entrada inv�lida!";
    else if(x % y == 0)
        cout << "o n�mero " << x << " � divis�vel por " << y << endl;
    else
        cout << "O n�mero " << x << " n�o � divis�vel por " <<  y  << endl;
    return 0;
}

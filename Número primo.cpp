#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int x, q, aux=0;
    cout << "Informe o n�mero: ";
    cin >> x;
    if (x == 1 || x == 2)
        cout << x << " n�o � primo";

    else if (x > 2)
    {
        for(q = x - 1; q > 1; q--)
        {
            if (x%q==0)
            {
                cout << x << " n�o � primo";
                q = 1;
                aux = 1;
            }
        }
        if (q == 1 && aux == 0)
            cout << x << " � primo" << endl;
    }
    else
        cout << "N�mero inv�lido";

    return 0;
}

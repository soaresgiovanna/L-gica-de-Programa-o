#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int ma=-99999999, me=9999999, med=0, n, aux=1, q=0;
    while(aux != 0)
    {
        cout << "N�mero: ";
        cin >> n;
        if(n != 0)
        {
            med= med + n;
            q++;
            if(n > ma)
            {
                ma = n;
            }
            if(n < me)
            {
                me = n;
            }
        }
        else
            aux=0;
    }

    if(n == 0 && q == 0)
        cout << "Entrada inv�lida";
    else
    {
        med = med / q;
        cout << "M�dia: " << med << endl << "Maior: " << ma << endl << "Menor: " << me << endl;
    }

    return 0;
}

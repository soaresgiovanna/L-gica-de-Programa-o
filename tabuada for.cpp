#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
int n, q;
    cout << "Informe o n�mero e deseja obter a tabuada: ";
    cin >> n;
    for(q=0; q<11; q++)
    {
        cout<< n << " x " << q << " = " << n*q << endl;;
    }
   return 0;
}

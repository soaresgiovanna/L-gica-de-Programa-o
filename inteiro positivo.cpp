#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
 int x;
 cout << "Informe o n�mero: ";
 cin >> x;
 if(x > 0)
    cout << "Positivo";
 else
    cout << "N�o � positivo";
 return 0;
}

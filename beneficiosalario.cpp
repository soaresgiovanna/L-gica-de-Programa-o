#include <iostream>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
 float r, b, a, s;
 cout << "Informe o sal�rio: ";
 cin >> s;
 if(s <= 900 && s > 0)
 {
    a = 350;
    b =  s * 0.15;
    r = a + b + s;
    cout << "Rendimento total: " << r << endl;
    cout << "Bonifica��o: " << b << "(15%)" << endl;
    cout << "Aux�lio escola: " << a << endl;
 }
  else if (s > 900 && s <= 3000)
  {
    a = 100;
    b = s * 0.05;
    r = a + b + s;
    cout << "Rendimento total: " << r << endl;
    cout << "Bonifica��o: " << b << " (5%)" << endl;
    cout << "Aux�lio escola: " << a << endl;
  }
  else if(s > 3000)
  {
    a = 100;
    b = 0;
    r = a + s;
    cout << "Rendimento total: " << r << endl;
    cout << "Bonifica��o: " << b << " (0%)" << endl;
    cout << "Aux�lio escola: " << a << endl;
  }
        else
            cout << "Sal�rio inv�lido";
  return 0;
}

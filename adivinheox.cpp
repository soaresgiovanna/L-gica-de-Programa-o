#include <iostream>
# include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{setlocale(LC_ALL, "Portuguese");
 int q, n, x;
 srand(time(NULL)); //cria um n�mero aleat�rio com base no tempo
 x = rand()%30+1; // cria um n�mero aleat�rio entre 1 e 30
do {
    cout << "Adivinhe o valor de x: ";
    cin >> n;
    q++;
    if(n < x)
     cout << "N�mero menor que x "<< endl;
    else if(n > x)
      cout << "N�mero maior que x " << endl;
    else if(n == x)
     cout << "Acertou!!" << endl << "N�mero de tentativas: " << q << endl;
 }while(n != x);

    return 0;
}

#include <iostream>
using namespace std;
void Le_vetor(float v[4])
{
   for(int i=0; i<4; i++)
   {
     cin >> v[i];
   }
}
float ordena(float n[4], char CorD)
{
    float aux;
    if(CorD == 'C' || CorD == 'c' || CorD == 'D' || CorD == 'd')
    {
      if(CorD == 'C' || CorD == 'c')
      {
         for(int i=0; i<4; i++)
            for(int j=(i+1); j<4; j++)

         {
             if(n[i] > n[j])

             {
                 aux = n[i];
                 n[i] = n[j];
                 n[j] = aux;
             }

         }
      }
       else if(CorD == 'D' || CorD == 'd')
       {
        for(int i=0; i<4; i++)
            for(int j=(i+1); j<4; j++)

         {
             if(n[i] < n[j])

             {
                 aux = n[i];
                 n[i] = n[j];
                 n[j] = aux;
             }

         }
       }
       for(int i=0; i<4; i++)
       cout << n[i] << " ";
    }
    else
        cout << "N�o foi poss�vel realizar a ordena��o. Tipo de ordena��o inv�lida!";
}
int main()
{setlocale(LC_ALL, "Portuguese");
    float n[4];
    char CorD;

    cout << "Informe C ou D, para crescente e decrescente e em seguida os 4 n�meros: ";
    cin >> CorD;
    Le_vetor(n);
    ordena(n,CorD);

    return 0;
}

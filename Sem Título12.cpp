#include <iostream>

using namespace std;

int main()

{

  int qtde_entrevistados, soma_pesos, soma_idades, idade;

  float peso, media_pesos, media_idades;

  qtde_entrevistados=0;

  soma_pesos=0;

  soma_idades=0;

  cout <<"Qual o peso do entrevistado? ";

  cin >> peso;

  while (peso!=0)

  {

    cout <<"Qual a idade do entrevistado? ";

    cin >>idade;

    qtde_entrevistados++;

    soma_pesos+=peso;

    soma_idades+=idade;

    cout <<"Qual o peso do entrevistado? ";

    cin >>peso;

  }

  media_pesos=soma_pesos/qtde_entrevistados;

  media_idades=soma_idades/qtde_entrevistados;

  cout <<"Foram entrevistadas "<<qtde_entrevistados<< " pessoas.\n";

  cout <<"A m�dia de pesos �: "<< media_pesos<<"\n";

  cout <<"A m�dia das idades �: "<< media_idades<<"\n";

}

#include <iostream>
using namespace std;
int main()
{
	int anoAtual,anoNasc,idade;
	cout<<"Ano atual: ";
	cin>>anoAtual;
	cout<<"Ano de Nascimento: ";
	cin>>anoNasc;
	idade=anoNasc-anoAtual;
	cout<<"Você tem ou fara"<<idade<<"anos";
}

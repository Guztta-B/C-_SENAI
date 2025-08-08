#include <iostream>
#include <string>

using namespace std;

int main()
{
     int idade= 17;//numero nteiro
     char sexo='m';// um unico caractere
     bool ativo= 1;//valores boleanos 0/1 verdadeiro ou falso
     string nome="Marcio"; //palavras, nomes

     float peso = 1.654;
     double altura = 1.75;

     cout << idade << "\n";
     cout << sexo<< endl;
     cout << ativo<< endl;
     cout << nome<< endl;

     cout << "Digite  o nome completo: " << endl;
     cout << "Digite  sua idade: " << endl;
     getline (cin,nome);
     cout <<nome;



     return 0;
}

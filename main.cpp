#include <iostream>
#include <cmath>

using namespace std;

void Juros_simples(float capital, float taxa, int tempo);
void Juros_compostos(float capital, float taxa, int tempo);

int main()
{
    float capital, taxa;
    int tempo, resp=0;

    while (resp != 1 && resp != 2){
       cout << "Bem vindo! \n\nEscolha o tipo de calculo que deseja fazer dentre as opcoes abaixo: \n\nJuros simples [1] ou Juros compostos[2]?\n\n";
       cin >> resp;}

    cout << "\nInforme o capital inicial: ";
    cin >> capital;

    cout << "\nInforme porcentagem da taxa de juros: ";
    cin >> taxa;

    taxa /= 100.0;

    cout << "\nInforme o tempo da aplicacao: ";
    cin >> tempo;

    if(resp == 1)
       Juros_simples(capital, taxa, tempo);
    else if(resp == 2)
       Juros_compostos(capital, taxa, tempo);

    return 0;
}

void Juros_simples(float capital, float taxa, int tempo){

   float juros, montante;

   juros = capital * taxa * tempo;
   montante = capital + juros;

   cout << "\n\nJuros = " << juros << "\nMontante final = " << montante << endl;
}

void Juros_compostos(float capital, float taxa, int tempo){

   float juros, montante;

   cout << taxa << endl;

   montante = capital * pow((taxa + 1), tempo);
   juros = montante - capital;

   cout << "\nJuros da aplicacao = " << juros << "\nMontante final =  " << montante << endl;
}

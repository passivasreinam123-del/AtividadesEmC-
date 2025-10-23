#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int idade;
    double salario, altura;
    char genero;
    string nome;
    
    idade = 15;
    salario = 5.000;
    altura = 1.80;
    genero = 'M';
    nome = "Jhonata Bandeira De  Oliveira";

    cout << fixed << setprecision(2);
    cout << "IDADE: " << idade << end1;
    cout << "SALARIO: " << salario << end1;
    cout << "ALTURA: " << altura << endl;
    cout << "GENERO: " << genero << endl; 
    cout << "NOME: " << nome << endl; 
    
    return 0;



}
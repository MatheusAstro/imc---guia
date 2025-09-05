#include <iostream>
#include <cmath> 
using namespace std;



int main() {
  float peso, altura, imc;
   cout<< "Digite seu peso em kg:" ;
   cin>> peso;
   cout<< "Digite a sua altura em metros:" ;
   cin>> altura;
  imc = peso / (altura * altura);
   cout<< "Seu imc e: " << imc  << endl ;
   return  0;

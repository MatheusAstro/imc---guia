// IMC EM C++ //
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

// IMC EM C //
#include <stdio.h>
]int main()
{
    float peso, altura, imc;
    printf ("Digite seu peso (em kg): ");
    scanf ("%f", &peso);
    
    printf("Digite sua altura (em metros): ");
    scanf ("%f", &altura);
    imc = peso / (altura*altura);
    printf ("Seu IMC é : %.2f\n",imc);

    return 0;
}

// IMC EM JS //

function calcularIMC(peso, altura) {
  // Validação básica para evitar divisão por zero ou valores inválidos
  if (peso <= 0 || altura <= 0) {
    return "Por favor, insira valores válidos para peso e altura.";
  }

  // Cálculo do IMC: peso / (altura * altura)
  const imc = peso / (altura * altura);
  // Alternativamente, pode-se usar: const imc = peso / Math.pow(altura, 2);

  return imc;
}

// Exemplo de uso
const pesoDoUsuario = 85.50; // em Kg
const alturaDoUsuario = 1.77; // em metros

const resultadoIMC = calcularIMC(pesoDoUsuario, alturaDoUsuario);

console.log("O seu IMC é: " + resultadoIMC.toFixed(2));

// em java //
import java.util.Scanner;
import java.util.Locale;

class CalculadoraIMC {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        scanner.useLocale(Locale.forLanguageTag("pt-BR")); // aceita vírgula como decimal

        double peso = 0;
        double altura = 0;

        // Loop até o usuário digitar um peso válido
        while (true) {
            System.out.print("Digite seu peso (em kg): ");
            if (scanner.hasNextDouble()) {
                peso = scanner.nextDouble();
                if (peso > 0) break;
                else System.out.println("Peso deve ser maior que 0.");
            } else {
                System.out.println("Entrada inválida. Use números com ponto ou vírgula.");
                scanner.next(); // descarta entrada inválida
            }
        }

        // Loop até o usuário digitar uma altura válida
        while (true) {
            System.out.print("Digite sua altura (em metros): ");
            if (scanner.hasNextDouble()) {
                altura = scanner.nextDouble();
                if (altura > 0) break;
                else System.out.println("Altura deve ser maior que 0.");
            } else {
                System.out.println("Entrada inválida. Use números com ponto ou vírgula.");
                scanner.next(); // descarta entrada inválida
            }
        }

        double imc = peso / (altura * altura);
        System.out.printf("Seu IMC é: %.2f\n", imc);

        scanner.close();
    }
}
 // imc em GO // 
package main

import (
	"fmt"
	"math" // Importe o pacote math para a função Pow (opcional, mas mais direto)
)

func main() {
	var peso float64
	var altura float64

	// Solicita ao usuário o peso
	fmt.Println("Digite o peso (em kg):")
	fmt.Scan(&peso)

	// Solicita ao usuário a altura
	fmt.Println("Digite a altura (em metros):")
	fmt.Scan(&altura)

	// Calcula o IMC usando a fórmula: peso / (altura * altura)
	// Alternativamente, pode-se usar math.Pow(altura, 2) para altura ao quadrado
	imc := peso / (altura * altura)
	// imc := peso / math.Pow(altura, 2) // Use esta linha se preferir math.Pow

	// Exibe o resultado do IMC
	fmt.Printf("Seu IMC é: %.2f\n", imc) // Formata para duas casas decimais

	// Adiciona uma mensagem de acordo com a faixa de IMC
	if imc < 18.5 {
		fmt.Println("Você está abaixo do peso.")
	} else if imc >= 18.5 && imc < 25 {
		fmt.Println("Você está com o peso normal.")
	} else {
		fmt.Println("Você está acima do peso.")
	}
}

#include <stdio.h>

int main () {
	
	// --- TIPO CARACTERE ---
	// Armazena um único caractere (baseado na tabela ASCII) ou números inteiros pequenos.
	char nome_da_variavel1 = 'a'; // 1 byte. Por padrão, geralmente vai de -128 a 127.
	printf("nome_da_variavel1");
	 
	// --- NÚMEROS INTEIROS (Valores exatos, sem parte fracionária) ---
	short int nome_da_variavel_short; // 2 bytes. Para números menores ( -32.768 a 32.767 ).
	int nome_da_variavel2;            // 4 bytes. O tipo inteiro padrão ( -2.147.483.648 a 2.147.483.647 ).
	long int nome__da_variavel_long;  // 4 bytes (em sistemas 32-bits) ou 8 bytes (em sistemas 64-bits).
	unsigned int nome_da_variavel_unsigned; // Nao armazena numeros negativos
	
	// --- NÚMEROS REAIS / PONTO FLUTUANTE (Valores com precisão decimal) ---
	// Nota: Em programação, usamos o ponto (.) em vez da vírgula para separar os decimais.
	float nome_da_variavel;                  // 4 bytes. Precisão simples (cerca de 6 a 7 casas decimais).
	double nome_da_variavel_double;          // 8 bytes. Precisão dupla (cerca de 15 casas decimais). O mais recomendado no dia a dia.
	long double nome_da_variavel_longdouble; // 10, 12 ou 16 bytes (depende da arquitetura). Altíssima precisão.
	
}

// Aspas simples utilizados para 'para um caracter'
// Aspas duplas "para um conjunto de caracteres"

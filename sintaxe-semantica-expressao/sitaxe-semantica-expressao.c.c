#include <stdio.h> // Diretiva de compilação: inclui a biblioteca padrão de Entrada e Saída (Standard Input/Output)

void main() { // Função principal (ponto de entrada do programa). Nota: o padrão moderno do C sugere "int main" com "return 0"
	
	// Declaração de variáveis inteiras e inicialização (atribuição do valor inicial)
	int a = 1; 
	int b = 2; 
	
	// Expressão aritmética de soma. O resultado é atribuído à variável 'c'
	int c = a + b; 
	
	// Função de saída: %d é o especificador de formato para exibir números inteiros
	printf("%d", c);
}

/* --- REVISÃO DOS CONCEITOS TEÓRICOS ---

  - Sentença (Statement): Uma instrução completa que termina com ";". Indica uma ação a ser executada.
  - Expressão (Expression): Uma combinação de valores, variáveis e operadores que resulta em um valor (ex: "a + b").
  - Sintaxe: O conjunto de regras que determina se a estrutura do código está correta (a "gramática" do C).
  - Semântica: O significado do código. Um código pode estar sintaticamente correto, mas fazer algo semanticamente errado (ex: somar quando deveria subtrair).
*/

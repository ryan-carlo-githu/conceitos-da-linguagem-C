#include <stdio.h>

// OPERADORES LÓGICOS

// Conjução ("e" lógico): &&
// 		É verdade quando tudo for verdade

// Disjunção ("ou" lógico): ||
// 		É verdade se ao menos um for verdade

// Inversão (negação - "não lógico"): !
// 		É verdade quando o operando é falso


int main() {

    // Inserindo variáveis
    float m;

    // Entrada de dados
    printf("Insira a nota: ");
    scanf("%f", &m);

    // CONJUNÇÃO
    if (m >= 4.0 && m <= 7.0) {
        printf("A nota está entre 4 e 7.\n");
    }

    // DISJUNÇÃO
    if (m < 4.0 || m > 7.0) {
        printf("A nota está fora do intervalo de 4 a 7.\n");
    }

    // INVERSÃO
    if (!(m >= 4.0 && m <= 7.0)) {
        printf("A nota NÃO está entre 4 e 7.\n");
    }

    return 0;
}

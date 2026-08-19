#include <stdio.h>
#include <stdlib.h>
#include "function.c"

int main(int argc, char *argv[]) {
    int numero;
    int resultado = 1;

    if (argc > 1) {
        numero = atoi(argv[1]); 
    } else {
        printf("Digite um número: ");
        if (scanf("%d", &numero) != 1) return 1;
    }

    resultado = fatorial(numero);

    printf("O fatorial de %d é %d\n", numero, resultado);
    printf("Feito por Marcelo Rigotti\n");

    FILE *arquivo = fopen("fatorial.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "O fatorial de %d é %d\n", numero, resultado);
        fprintf(arquivo, "Feito por Marcelo Rigotti\n");
        fclose(arquivo);
    }

    return 0;
}

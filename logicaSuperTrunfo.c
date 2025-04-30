#include <stdio.h>
#include <string.h>

struct Cidade {
    char nome[50];
    int populacao;
    float area;
    float pib;
};

int main() {
    struct Cidade campos = {"Campos dos Goytacazes", 511000, 4032.0, 20.0};
    struct Cidade sjc = {"São José dos Campos", 737000, 1100.0, 55.0};

    printf("\n--- Comparação entre %s e %s ---\n\n", campos.nome, sjc.nome);

    if (campos.populacao > sjc.populacao) {
        printf("Maior população: %s\n", campos.nome);
    } else if (sjc.populacao > campos.populacao) {
        printf("Maior população: %s\n", sjc.nome);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    if (campos.area > sjc.area) {
        printf("Maior área territorial: %s\n", campos.nome);
    } else if (sjc.area > campos.area) {
        printf("Maior área territorial: %s\n", sjc.nome);
    } else {
        printf("As duas cidades têm a mesma área territorial.\n");
    }

    if (campos.pib > sjc.pib) {
        printf("Maior PIB: %s\n", campos.nome);
    } else if (sjc.pib > campos.pib) {
        printf("Maior PIB: %s\n", sjc.nome);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    return 0;
}

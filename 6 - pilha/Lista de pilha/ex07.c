#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 1000000

void ordenar_questao_5(int *vetor) {
    for (int i = 0; i < TAMANHO - 1; i++) {
        for (int j = i + 1; j < TAMANHO; j++) {
            if (vetor[i] > vetor[j]) {
                int x = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = x;
            }
        }
    }
}

void ordenar_questao_6(int *vetor) {
    for (int i = 0; i < TAMANHO - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < TAMANHO; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }
        int temp = vetor[menor];
        vetor[menor] = vetor[i];
        vetor[i] = temp;
    }
}

int* gerar_vetor_ordenado() {
    int *vetor = malloc(TAMANHO * sizeof(int));//dinamicamente
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = i + 1;
    }
    return vetor;
}

int* gerar_vetor_desordenado() {
    int *vetor = malloc(TAMANHO * sizeof(int));
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % TAMANHO; //valor aleatório
    }
    return vetor;
}

void medir_tempo(void (*func)(int*), int *vetor, const char *descricao) {
    clock_t inicio = clock();
    func(vetor);
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("%s: %.2f segundos\n", descricao, tempo);
}

int main() {
    srand(time(NULL)); // números aleatórios

    int *vetor_ordenado = gerar_vetor_ordenado();
    int *vetor_desordenado = gerar_vetor_desordenado();

    printf("Ordenando com algoritmo da questão 5\n");
    medir_tempo(ordenar_questao_5, vetor_desordenado, "Bubble Sort - Vetor Desordenado");

    printf("Ordenando com algoritmo da questão 6\n");
    medir_tempo(ordenar_questao_6, vetor_desordenado, "Selection Sort - Vetor Desordenado");

    free(vetor_ordenado);
    free(vetor_desordenado);

    return 0;
}
//O programa demora muito para rodar os dois códigos
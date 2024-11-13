# Alocação Dinâmica em C

Este projeto cobre os fundamentos da alocação dinâmica de memória em C usando as funções `malloc`, `calloc` e `realloc`.

## Conceitos

- **Alocação Dinâmica**: Permite alocar memória durante a execução do programa.
- **malloc**: Aloca um bloco de memória não inicializado.
- **calloc**: Aloca e inicializa um bloco de memória.
- **realloc**: Redimensiona um bloco de memória previamente alocado.

## Conteúdo

1. **malloc**: Como alocar memória dinamicamente para variáveis e arrays.
2. **calloc**: Diferença entre `calloc` e `malloc` na inicialização de memória.
3. **realloc**: Como redimensionar um bloco de memória alocado.
4. **free**: Importância de liberar memória alocada dinamicamente para evitar vazamentos de memória.

## Exemplo de Código

```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Erro de alocação de memória\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Erro de realocação de memória\n");
        return 1;
    }

    for (int i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

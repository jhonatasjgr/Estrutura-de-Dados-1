# Ponteiros em C

Este projeto é uma introdução ao uso de ponteiros na linguagem C. Ele cobre desde os conceitos básicos de ponteiros até o uso prático em manipulação de variáveis e arrays.

## Conceitos

- **Ponteiros**: São variáveis que armazenam o endereço de memória de outras variáveis.
- **Operador &**: Usado para obter o endereço de uma variável.
- **Operador** *: Usado para acessar o valor armazenado no endereço de memória referenciado pelo ponteiro.

## Conteúdo

1. **Declaração de Ponteiros**: Como declarar e inicializar ponteiros.
2. **Manipulação de Ponteiros**: Utilizando ponteiros para modificar valores de variáveis.
3. **Ponteiros e Arrays**: A relação entre ponteiros e arrays e como manipulá-los com ponteiros.
4. **Ponteiros de Ponteiros**: Entendendo e utilizando ponteiros que apontam para outros ponteiros.

## Exemplo de Código

```c
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor de p (endereço de x): %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}

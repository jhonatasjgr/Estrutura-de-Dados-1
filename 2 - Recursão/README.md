# Recursão em C

Este projeto explora a técnica de recursão em C, uma prática essencial para resolver problemas onde uma função chama a si mesma para alcançar uma solução.

## Conceitos

- **Recursão**: Uma função recursiva chama a si mesma até atingir uma condição de parada.
- **Caso Base**: A condição que para a recursão.
- **Passo Recursivo**: A chamada recursiva da função até atingir o caso base.

## Conteúdo

1. **Funções Recursivas**: Estrutura básica de uma função recursiva.
2. **Fatorial**: Cálculo de fatorial de um número usando recursão.
3. **Fibonacci**: Exemplo de uma função recursiva para a sequência de Fibonacci.
4. **Dividir e Conquistar**: Exemplos práticos onde a recursão é útil para dividir problemas em partes menores.

## Exemplo de Código

```c
#include <stdio.h>

int fatorial(int n) {
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}

int main() {
    int num = 5;
    printf("Fatorial de %d é %d\n", num, fatorial(num));
    return 0;
}

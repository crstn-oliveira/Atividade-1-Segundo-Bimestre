#include <stdio.h>

int chamadas = 0;

// Se n for 0 ou 1, a funcao retorna o proprio valor.

// A cada chamada, o problema eh reduzido para fibonacci(n-1) e fibonacci(n-2).

int fibonacci(int n)
{
    chamadas++;

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);

    printf("\nFibonacci(%d) = %d\n", n, resultado);
    printf("Quantidade de chamadas recursivas: %d\n", chamadas);

    return 0;
}

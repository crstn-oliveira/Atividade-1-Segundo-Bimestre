#include <stdio.h>
#include <stdlib.h>

int chamadasIngenua = 0;
int chamadasMemo = 0;

// ---------------- VERSAO SEM MEMOIZACAO ----------------

// Se n for 0 ou 1, retorna o proprio valor.

// Reducao: divide o problema em fib(n-1) e fib(n-2).

int fibonacciIngenuo(int n)
{
    chamadasIngenua++;

    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibonacciIngenuo(n - 1) + fibonacciIngenuo(n - 2);
}

// ---------------- VERSAO COM MEMOIZACAO ----------------


// Se n for 0 ou 1, retorna o proprio valor.

// Reducao: calcula apenas valores ainda nao armazenados no vetor memo.

int fibonacciMemo(int n, int *memo)
{
    chamadasMemo++;

    if (memo[n] != -1)
    {
        return memo[n];
    }

    if (n == 0)
    {
        memo[n] = 0;
    }
    else if (n == 1)
    {
        memo[n] = 1;
    }
    else
    {
        memo[n] = fibonacciMemo(n - 1, memo) +
                  fibonacciMemo(n - 2, memo);
    }

    return memo[n];
}

int main()
{
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Alocacao dinamica do vetor de memoizacao
    int *memo = (int *)malloc((n + 1) * sizeof(int));

    for (int i = 0; i <= n; i++)
    {
        memo[i] = -1;
    }

    int resultadoIngenuo = fibonacciIngenuo(n);
    int resultadoMemo = fibonacciMemo(n, memo);

    printf("\n--- RESULTADOS ---\n");

    printf("\nVersao ingenua:\n");
    printf("Resultado: %d\n", resultadoIngenuo);
    printf("Chamadas recursivas: %d\n", chamadasIngenua);

    printf("\nVersao com memoizacao:\n");
    printf("Resultado: %d\n", resultadoMemo);
    printf("Chamadas recursivas: %d\n", chamadasMemo);

    free(memo);

    return 0;
}

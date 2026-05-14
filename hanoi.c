#include <stdio.h>

int movimentos = 0;

// Quando existe apenas 1 disco, ele eh movido diretamente.

// Reducao: o problema eh reduzido movendo n-1 discos antes e depois do maior disco.

void hanoi(int n, char origem, char destino, char auxiliar)
{
    if (n == 1)
    {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        movimentos++;
        return;
    }

    hanoi(n - 1, origem, auxiliar, destino);

    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    movimentos++;

    hanoi(n - 1, auxiliar, destino, origem);
}

int main()
{
    int n;

    printf("Digite a quantidade de discos: ");
    scanf("%d", &n);

    printf("\nMovimentos:\n");

    hanoi(n, 'A', 'C', 'B');

    printf("\nTotal de movimentos: %d\n", movimentos);

    return 0;
}
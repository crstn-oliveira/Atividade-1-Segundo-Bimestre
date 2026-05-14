# Atividade 1 - Segundo Bimestre

## Recursividade em C

Este repositório contém 3 exercícios utilizando recursividade na linguagem C.

## 1. Fibonacci Recursivo (Sem Otimização)

Aqui é utilizada recursão pura para calcular a sequência de Fibonacci.
A função chama ela mesma para calcular fib(n-1) e fib(n-2) até atingir os casos base (0 e 1).

Também é contabilizada a quantidade de chamadas recursivas para mostrar a ineficiência da abordagem ingênua, já que vários valores são recalculados repetidamente.

### Caso base

* Se `n == 0`, retorna `0`
* Se `n == 1`, retorna `1`

### Redução do problema

A função divide o problema em duas novas chamadas:

* `fib(n - 1)`
* `fib(n - 2)`

## 2. Fibonacci com Memoização

Esta versão mantém a solução recursiva, mas utiliza memoização para armazenar resultados já calculados.
Foi usado um vetor com alocação dinâmica (malloc) para guardar os valores de Fibonacci e evitar cálculos repetidos.
O programa compara a quantidade de chamadas recursivas da versão otimizada com a versão ingênua, mostrando a diferença de desempenho.

### Caso base

* Se `n == 0`, retorna `0`
* Se `n == 1`, retorna `1`

### Redução do problema

A função continua utilizando recursão:

* `fib(n - 1)`
* `fib(n - 2)`

## 3. Torres de Hanoi

Foi usado recursão para resolver o problema das Torres de Hanoi.

### Caso base

* Quando existe apenas 1 disco, ele é movido diretamente para a torre destino.

### Redução do problema

O problema é dividido em três etapas:

1. Mover `n - 1` discos para a torre auxiliar
2. Mover o maior disco para a torre destino
3. Mover novamente `n - 1` discos para a torre destino

Também é exibido o total de movimentos realizados.

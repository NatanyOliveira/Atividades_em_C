# Descrição do Programa

Este programa em C lê **N** números inteiros não negativos e os ordena conforme o seguinte critério:

- Primeiro imprime todos os números pares em ordem crescente.
- Depois imprime todos os números ímpares em ordem decrescente.

O programa utiliza alocação estática de arrays para armazenar os números, ponteiros para manipulação dos dados, e a função **qsort** para realizar a ordenação eficiente.

---

# Como funciona o programa

## Entrada

- Lê um número inteiro **N** que indica quantos números serão lidos.
- Lê **N** números inteiros e armazena em um vetor principal chamado **numeros**.

## Separação de pares e ímpares

- Percorre o vetor principal usando um ponteiro **ptr**.
- Para cada número lido:
  - Se o número é par (`num % 2 == 0`), é armazenado no vetor **pares**.
  - Se o número é ímpar, é armazenado no vetor **impares**.
- As variáveis **qtd_pares** e **qtd_impares** contam quantos números foram armazenados em cada vetor.

## Ordenação

- Os números pares são ordenados em ordem crescente utilizando **qsort** com a função **compara_c**.
- Os números ímpares são ordenados em ordem decrescente utilizando **qsort** com a função **compara_d**.

## Impressão dos resultados

- Primeiro imprime todos os números pares ordenados.
- Depois imprime todos os números ímpares ordenados.
 

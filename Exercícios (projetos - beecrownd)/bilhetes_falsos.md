# Contagem de Bilhetes Clonados

## Descrição

Este programa lê vários casos de teste onde são informados dois números `N` e `M`. Para cada caso, ele recebe `M` bilhetes numerados entre 0 e N.

O programa identifica quantos bilhetes aparecem **mais de uma vez** (chamados de "clones") e imprime a quantidade de bilhetes duplicados.

A entrada termina quando `N` e `M` forem zero.

## Funcionamento

- Para cada par `N` e `M` lido:
  - É criado dinamicamente um vetor para contar quantas vezes cada bilhete apareceu.
  - O vetor é inicializado com zeros.
  - Para cada bilhete lido, incrementa-se sua contagem.
  - Sempre que um bilhete chega a 2 ocorrências, incrementa-se a variável `clones` (não conta mais além disso).
- Ao final do caso, imprime quantos bilhetes foram clonados (ou seja, aparecem pelo menos duas vezes).
- O programa termina ao ler `0 0`.
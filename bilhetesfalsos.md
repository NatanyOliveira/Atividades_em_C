# Bilhetes Falsos – Solução em C

Este programa identifica quantos bilhetes clonados foram usados em uma festa. Cada bilhete verdadeiro tem um número único de 1 a N, mas o pacote coletado na entrada pode conter cópias. A ideia é contar quantos números de bilhete aparecem mais de uma vez.

---

##  Entrada

- Vários casos de teste.
- Cada caso tem dois inteiros `N` e `M`:
  - `N`: número total de bilhetes válidos (de 1 a N).
  - `M`: número de bilhetes coletados na entrada.
- Depois, uma linha com `M` inteiros representando os bilhetes coletados.
- Termina com `N = 0` e `M = 0`.

---

## Saída

- Para cada caso, imprime o número de **bilhetes clonados**.

---

##  Lógica do Programa

1. Usa um vetor de inteiros para contar quantas vezes cada número de bilhete apareceu.
2. Quando um bilhete aparece pela **segunda vez**, conta ele como “clonado”.
3. No final de cada caso, imprime o total de clonados e libera a memória usada com `free`.

# Verificação de Diferenças no Bingo

## Descrição

Este programa lê vários casos de teste contendo um número `N` e uma quantidade `B` de bolas numeradas. Para cada caso, o programa verifica se todas as diferenças absolutas entre os números das bolas (de 1 até N) estão representadas pelas diferenças entre as bolas fornecidas.

Ou seja, ele checa se é possível formar todas as diferenças de 1 até N usando a diferença absoluta entre quaisquer duas bolas da lista.

Quando todas as diferenças de 1 a N estiverem cobertas, o programa imprime `Y`. Caso contrário, imprime `N`.

## Funcionamento

- O programa lê várias linhas contendo dois inteiros `N` e `B`.
- Para cada par `N` e `B`, lê uma lista de `B` bolas (valores inteiros).
- Calcula as diferenças absolutas entre todas as combinações possíveis dessas bolas.
- Verifica se todas as diferenças de 1 até N aparecem nessas combinações.
- Imprime `Y` se todas as diferenças estão presentes, ou `N` se alguma diferença estiver faltando.
- A entrada termina quando `N` e `B` forem iguais a zero.
